/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude

universe u v w

@[inline] def id {α : Sort u} (a : α) : α := a

/-
The kernel definitional equality test (t =?= s) has special support for idDelta applications.
It implements the following rules

   1)   (idDelta t) =?= t
   2)   t =?= (idDelta t)
   3)   (idDelta t) =?= s  IF (unfoldOf t) =?= s
   4)   t =?= idDelta s    IF t =?= (unfoldOf s)

This is mechanism for controlling the delta reduction (aka unfolding) used in the kernel.

We use idDelta applications to address performance problems when Type checking
theorems generated by the equation Compiler.
-/
@[inline] def idDelta {α : Sort u} (a : α) : α := a

/- `idRhs` is an auxiliary declaration used to implement "smart unfolding". It is used as a marker. -/
@[macroInline, reducible] def idRhs (α : Sort u) (a : α) : α := a

abbrev Function.comp {α : Sort u} {β : Sort v} {δ : Sort w} (f : β → δ) (g : α → β) : α → δ :=
  fun x => f (g x)

abbrev Function.const {α : Sort u} (β : Sort v) (a : α) : β → α :=
  fun x => a

@[reducible] def inferInstance {α : Type u} [i : α] : α := i
@[reducible] def inferInstanceAs (α : Type u) [i : α] : α := i

set_option bootstrap.inductiveCheckResultingUniverse false in
inductive PUnit : Sort u
  | unit : PUnit

/-- An abbreviation for `PUnit.{0}`, its most common instantiation.
    This Type should be preferred over `PUnit` where possible to avoid
    unnecessary universe parameters. -/
abbrev Unit : Type := PUnit

@[matchPattern] abbrev Unit.unit : Unit := PUnit.unit

/-- Auxiliary unsafe constant used by the Compiler when erasing proofs from code. -/
unsafe axiom lcProof {α : Prop} : α

/-- Auxiliary unsafe constant used by the Compiler to mark unreachable code. -/
unsafe axiom lcUnreachable {α : Sort u} : α

inductive True : Prop
  | intro : True

inductive False : Prop

inductive Empty : Type

def Not (a : Prop) : Prop := a → False

@[macroInline] def False.elim {C : Sort u} (h : False) : C :=
  False.rec (fun _ => C) h

@[macroInline] def absurd {a : Prop} {b : Sort v} (h₁ : a) (h₂ : Not a) : b :=
  False.elim (h₂ h₁)

inductive Eq {α : Sort u} (a : α) : α → Prop
  | refl {} : Eq a a

abbrev Eq.ndrec.{u1, u2} {α : Sort u2} {a : α} {motive : α → Sort u1} (m : motive a) {b : α} (h : Eq a b) : motive b :=
  Eq.rec (motive := fun α _ => motive α) m h

@[matchPattern] def rfl {α : Sort u} {a : α} : Eq a a := Eq.refl a

theorem Eq.subst {α : Sort u} {motive : α → Prop} {a b : α} (h₁ : Eq a b) (h₂ : motive a) : motive b :=
  Eq.ndrec h₂ h₁

theorem Eq.symm {α : Sort u} {a b : α} (h : Eq a b) : Eq b a :=
  h ▸ rfl

@[macroInline] def cast {α β : Sort u} (h : Eq α β) (a : α) : β :=
  Eq.rec (motive := fun α _ => α) a h

theorem congrArg {α : Sort u} {β : Sort v} {a₁ a₂ : α} (f : α → β) (h : Eq a₁ a₂) : Eq (f a₁) (f a₂) :=
  h ▸ rfl

/-
Initialize the Quotient Module, which effectively adds the following definitions:

constant Quot {α : Sort u} (r : α → α → Prop) : Sort u

constant Quot.mk {α : Sort u} (r : α → α → Prop) (a : α) : Quot r

constant Quot.lift {α : Sort u} {r : α → α → Prop} {β : Sort v} (f : α → β) :
  (∀ a b : α, r a b → Eq (f a) (f b)) → Quot r → β

constant Quot.ind {α : Sort u} {r : α → α → Prop} {β : Quot r → Prop} :
  (∀ a : α, β (Quot.mk r a)) → ∀ q : Quot r, β q
-/
init_quot

inductive HEq {α : Sort u} (a : α) : {β : Sort u} → β → Prop
  | refl {} : HEq a a

@[matchPattern] def HEq.rfl {α : Sort u} {a : α} : HEq a a :=
  HEq.refl a

theorem eqOfHEq {α : Sort u} {a a' : α} (h : HEq a a') : Eq a a' :=
  have (α β : Sort u) → (a : α) → (b : β) → HEq a b → (h : Eq α β) → Eq (cast h a) b from
    fun α β a b h₁ =>
      HEq.rec (motive := fun {β} (b : β) (h : HEq a b) => (h₂ : Eq α β) → Eq (cast h₂ a) b)
        (fun (h₂ : Eq α α) => rfl)
        h₁
  this α α a a' h rfl

structure Prod (α : Type u) (β : Type v) :=
  (fst : α) (snd : β)

attribute [unbox] Prod

/-- Similar to `Prod`, but `α` and `β` can be propositions.
   We use this Type internally to automatically generate the brecOn recursor. -/
structure PProd (α : Sort u) (β : Sort v) :=
  (fst : α) (snd : β)

/-- Similar to `Prod`, but `α` and `β` are in the same universe. -/
structure MProd (α β : Type u) :=
  (fst : α) (snd : β)

structure And (a b : Prop) : Prop :=
  intro :: (left : a) (right : b)

inductive Or (a b : Prop) : Prop
  | inl (h : a) : Or a b
  | inr (h : b) : Or a b

inductive Bool : Type
  | false : Bool
  | true : Bool

export Bool (false true)

/- Remark: Subtype must take a Sort instead of Type because of the axiom strongIndefiniteDescription. -/
structure Subtype {α : Sort u} (p : α → Prop) :=
  (val : α) (property : p val)

/-- Gadget for optional parameter support. -/
@[reducible] def optParam (α : Sort u) (default : α) : Sort u := α

/-- Gadget for marking output parameters in type classes. -/
@[reducible] def outParam (α : Sort u) : Sort u := α

/-- Auxiliary Declaration used to implement the notation (a : α) -/
@[reducible] def typedExpr (α : Sort u) (a : α) : α := a

/-- Auxiliary Declaration used to implement the named patterns `x@p` -/
@[reducible] def namedPattern {α : Sort u} (x a : α) : α := a

/- Auxiliary axiom used to implement `sorry`. -/
axiom sorryAx (α : Sort u) (synthetic := true) : α

theorem eqFalseOfNeTrue : {b : Bool} → Not (Eq b true) → Eq b false
  | true, h => False.elim (h rfl)
  | false, h => rfl

theorem eqTrueOfNeFalse : {b : Bool} → Not (Eq b false) → Eq b true
  | true, h => rfl
  | false, h => False.elim (h rfl)

theorem neFalseOfEqTrue : {b : Bool} → Eq b true → Not (Eq b false)
  | true, _  => fun h => Bool.noConfusion h
  | false, h => Bool.noConfusion h

theorem neTrueOfEqFalse : {b : Bool} → Eq b false → Not (Eq b true)
  | true, h  => Bool.noConfusion h
  | false, _ => fun h => Bool.noConfusion h

class Inhabited (α : Sort u) :=
  mk {} :: (default : α)

constant arbitrary (α : Sort u) [s : Inhabited α] : α :=
  @Inhabited.default α s

instance (α : Sort u) {β : Sort v} [Inhabited β] : Inhabited (α → β) := {
  default := fun _ => arbitrary β
}

instance (α : Sort u) {β : α → Sort v} [(a : α) → Inhabited (β a)] : Inhabited ((a : α) → β a) := {
  default := fun a => arbitrary (β a)
}

/-- Universe lifting operation from Sort to Type -/
structure PLift (α : Sort u) : Type u :=
  up :: (down : α)

/- Bijection between α and PLift α -/
theorem PLift.upDown {α : Sort u} : ∀ (b : PLift α), Eq (up (down b)) b
  | up a => rfl

theorem PLift.downUp {α : Sort u} (a : α) : Eq (down (up a)) a :=
  rfl

/- Pointed types -/
structure PointedType :=
  (type : Type u)
  (val : type)

instance : Inhabited PointedType.{u} := {
  default := { type := PUnit.{u+1}, val := ⟨⟩ }
}

/-- Universe lifting operation -/
structure ULift.{r, s} (α : Type s) : Type (max s r) :=
  up :: (down : α)

/- Bijection between α and ULift.{v} α -/
theorem ULift.upDown {α : Type u} : ∀ (b : ULift.{v} α), Eq (up (down b)) b
  | up a => rfl

theorem ULift.downUp {α : Type u} (a : α) : Eq (down (up.{v} a)) a :=
  rfl

class inductive Decidable (p : Prop)
  | isFalse (h : Not p) : Decidable p
  | isTrue  (h : p) : Decidable p

@[inlineIfReduce, nospecialize] def Decidable.decide (p : Prop) [h : Decidable p] : Bool :=
  Decidable.casesOn (motive := fun _ => Bool) h (fun _ => false) (fun _ => true)

export Decidable (isTrue isFalse decide)

abbrev DecidablePred {α : Sort u} (r : α → Prop) :=
  (a : α) → Decidable (r a)

abbrev DecidableRel {α : Sort u} (r : α → α → Prop) :=
  (a b : α) → Decidable (r a b)

abbrev DecidableEq (α : Sort u) :=
  (a b : α) → Decidable (Eq a b)

def decEq {α : Sort u} [s : DecidableEq α] (a b : α) : Decidable (Eq a b) :=
  s a b

theorem decideEqTrue : {p : Prop} → [s : Decidable p] → p → Eq (decide p) true
  | _, isTrue  _, _   => rfl
  | _, isFalse h₁, h₂ => absurd h₂ h₁

theorem decideEqTrue' : [s : Decidable p] → p → Eq (decide p) true
  | isTrue  _, _   => rfl
  | isFalse h₁, h₂ => absurd h₂ h₁

theorem decideEqFalse : {p : Prop} → [s : Decidable p] → Not p → Eq (decide p) false
  | _, isTrue  h₁, h₂ => absurd h₁ h₂
  | _, isFalse h, _   => rfl

theorem ofDecideEqTrue {p : Prop} [s : Decidable p] : Eq (decide p) true → p := fun h =>
  match s with
  | isTrue  h₁ => h₁
  | isFalse h₁ => absurd h (neTrueOfEqFalse (decideEqFalse h₁))

theorem ofDecideEqFalse {p : Prop} [s : Decidable p] : Eq (decide p) false → Not p := fun h =>
  match s with
  | isTrue  h₁ => absurd h (neFalseOfEqTrue (decideEqTrue h₁))
  | isFalse h₁ => h₁

@[inline] instance : DecidableEq Bool :=
  fun a b => match a, b with
   | false, false => isTrue rfl
   | false, true  => isFalse (fun h => Bool.noConfusion h)
   | true, false  => isFalse (fun h => Bool.noConfusion h)
   | true, true   => isTrue rfl

class BEq      (α : Type u) := (beq : α → α → Bool)

open BEq (beq)

instance {α : Type u} [DecidableEq α] : BEq α :=
  ⟨fun a b => decide (Eq a b)⟩

-- We use "dependent" if-then-else to be able to communicate the if-then-else condition
-- to the branches
@[macroInline] def dite {α : Sort u} (c : Prop) [h : Decidable c] (t : c → α) (e : Not c → α) : α :=
  Decidable.casesOn (motive := fun _ => α) h e t
