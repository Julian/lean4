/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Data.Array.Basic

@[inline] def Array.insertionSort (a : Array α) (lt : α → α → Bool) : Array α :=
  traverse a 0 a.size
where
  @[specialize] traverse (a : Array α) (i : Nat) (fuel : Nat) : Array α :=
    match fuel with
    | 0      => a
    | fuel+1 =>
      if h : i < a.size then
        traverse (swapLoop a i h) (i+1) fuel
      else
        a
  @[specialize] swapLoop (a : Array α) (j : Nat) (h : j < a.size) : Array α :=
    match he:j with
    | 0    => a
    | j'+1 =>
      have h' : j' < a.size by subst j; exact Nat.ltTrans (Nat.ltSuccSelf _) h
      if lt (a.get ⟨j, h⟩) (a.get ⟨j', h'⟩) then
        swapLoop (a.swap ⟨j, h⟩ ⟨j', h'⟩) j' (by rw [size_swap]; assumption done)
      else
        a
