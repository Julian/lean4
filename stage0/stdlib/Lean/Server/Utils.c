// Lean compiler output
// Module: Lean.Server.Utils
// Imports: Init Lean.Data.Position Lean.Data.Lsp Init.System.FilePath
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_IO_FS_Stream_chainLeft___elambda__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
uint8_t l_Lean_Server_toFileUri___lambda__1(uint32_t);
lean_object* l_IO_FS_Stream_chainLeft___elambda__4___boxed(lean_object*, lean_object*, lean_object*);
extern uint8_t l_System_Platform_isWindows;
lean_object* l_IO_FS_Stream_chainRight___elambda__6(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Server_foldDocumentChanges_match__1(lean_object*);
lean_object* l_IO_FS_Stream_withPrefix___elambda__4(lean_object*, size_t, lean_object*);
lean_object* l_System_mkFilePath(lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_toFileUri___closed__1;
lean_object* l_List_takeWhile_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__6(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_mk___at_Lean_Server_maybeTee___spec__1(lean_object*, uint8_t, uint8_t, lean_object*);
extern lean_object* l_Lean_instInhabitedParserDescr___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_foldDocumentChanges___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_instInhabitedNat;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_IO_FS_Stream_withPrefix___elambda__5(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* l_IO_throwServerError___rarg(lean_object*, lean_object*);
lean_object* l_String_dropWhile(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_io_getenv(lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges___closed__3;
lean_object* l_IO_FS_Stream_chainLeft___elambda__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_instInhabitedDocumentMeta;
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___elambda__4(lean_object*, lean_object*, uint8_t, lean_object*, size_t, lean_object*);
lean_object* l_IO_FS_Stream_withPrefix___elambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_throwServerError(lean_object*);
lean_object* l_IO_FS_Handle_mk___at_Lean_Server_maybeTee___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges_match__2___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_withPrefix___elambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_maybeTee___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_maybeTee___closed__1;
lean_object* l_Lean_Server_foldDocumentChanges_match__2(lean_object*);
lean_object* l_Lean_Server_toFileUri___closed__2;
lean_object* l_IO_FS_Stream_chainLeft(lean_object*, lean_object*, uint8_t);
lean_object* l_IO_FS_Stream_chainRight___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__2(lean_object*, lean_object*);
lean_object* l_List_takeWhile_match__1(lean_object*, lean_object*);
lean_object* l_IO_Prim_fopenFlags(uint8_t, uint8_t);
lean_object* l_System_FilePath_normalizePath(lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_stream_of_handle(lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_Server_maybeTee_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_takeWhile___rarg(lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_IO_FS_Stream_withPrefix___elambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Server_replaceLspRange___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_replaceLspRange(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges___closed__5;
lean_object* l_Lean_Server_instInhabitedDocumentMeta___closed__1;
lean_object* l_IO_FS_Stream_chainLeft___elambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___elambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_maybeTee_match__1(lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_toFileUri___lambda__1___boxed(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap___closed__1;
lean_object* l_IO_FS_Stream_chainRight(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Server_toFileUri(lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges(lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges___closed__1;
lean_object* l_IO_FS_Stream_withPrefix___elambda__6(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_withPrefix(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_foldDocumentChanges___closed__2;
lean_object* l_Lean_Server_foldDocumentChanges___closed__4;
lean_object* l_Lean_Server_maybeTee(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_withPrefix___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_min(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___elambda__4(lean_object*, size_t, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___elambda__5(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_withPrefix___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___elambda__2(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, lean_object*, lean_object*);
lean_object* l_List_takeWhile(lean_object*);
lean_object* l_IO_FS_Stream_chainLeft___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_chainRight___elambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_foldDocumentChanges___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_mapAux___at_Lean_Server_toFileUri___spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_IO_throwServerError___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_IO_throwServerError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_throwServerError___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_chainRight___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_IO_FS_Stream_chainRight___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_IO_FS_Stream_chainRight___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_IO_FS_Stream_chainRight___elambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_box_usize(x_5);
x_9 = lean_apply_2(x_7, x_8, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_10);
x_13 = lean_apply_2(x_12, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
if (x_3 == 0)
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_10);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_apply_1(x_4, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_10);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_10);
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_10);
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_4);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_9);
if (x_32 == 0)
{
return x_9;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_9, 0);
x_34 = lean_ctor_get(x_9, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_9);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_IO_FS_Stream_chainRight___elambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
}
lean_object* l_IO_FS_Stream_chainRight___elambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_chainRight___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 5);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_4);
x_7 = lean_apply_2(x_6, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
if (x_2 == 0)
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_apply_1(x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_4);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_4);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_7);
if (x_22 == 0)
{
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_IO_FS_Stream_chainRight(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainRight___elambda__6), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainRight___elambda__5), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_box(x_3);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainRight___elambda__4___boxed), 6, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_8);
lean_closure_set(x_9, 3, x_6);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainRight___elambda__3), 3, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
x_12 = lean_box(x_3);
x_13 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainRight___lambda__1___boxed), 5, 3);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_12);
lean_closure_set(x_13, 2, x_6);
x_14 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainRight___elambda__2), 3, 2);
lean_closure_set(x_14, 0, x_11);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainRight___elambda__1), 3, 1);
lean_closure_set(x_15, 0, x_1);
x_16 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_7);
lean_ctor_set(x_16, 2, x_9);
lean_ctor_set(x_16, 3, x_10);
lean_ctor_set(x_16, 4, x_14);
lean_ctor_set(x_16, 5, x_15);
return x_16;
}
}
lean_object* l_IO_FS_Stream_chainRight___elambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_IO_FS_Stream_chainRight___elambda__4(x_1, x_2, x_7, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_IO_FS_Stream_chainRight___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_IO_FS_Stream_chainRight___lambda__1(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_IO_FS_Stream_chainRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_IO_FS_Stream_chainRight(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 5);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_2, x_4);
return x_6;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 5);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_5);
x_8 = lean_apply_2(x_7, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
if (x_3 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = l_IO_FS_Stream_chainLeft___elambda__1___lambda__1(x_2, x_5, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_apply_1(x_4, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_IO_FS_Stream_chainLeft___elambda__1___lambda__1(x_2, x_5, x_14, x_15);
lean_dec(x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_5);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
return x_8;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_2, x_4);
return x_6;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_5);
x_8 = lean_apply_2(x_7, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
if (x_3 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = l_IO_FS_Stream_chainLeft___elambda__3___lambda__1(x_2, x_5, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_apply_1(x_4, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_IO_FS_Stream_chainLeft___elambda__3___lambda__1(x_2, x_5, x_14, x_15);
lean_dec(x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_5);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
return x_8;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__4(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_box_usize(x_2);
x_6 = lean_apply_2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_chainLeft(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainLeft___elambda__6), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainLeft___elambda__5), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainLeft___elambda__4___boxed), 3, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_box(x_3);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainLeft___elambda__3___boxed), 6, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_9);
lean_closure_set(x_10, 3, x_5);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainLeft___elambda__2), 2, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = lean_box(x_3);
x_13 = lean_alloc_closure((void*)(l_IO_FS_Stream_chainLeft___elambda__1___boxed), 6, 4);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_12);
lean_closure_set(x_13, 3, x_5);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_7);
lean_ctor_set(x_14, 2, x_8);
lean_ctor_set(x_14, 3, x_10);
lean_ctor_set(x_14, 4, x_11);
lean_ctor_set(x_14, 5, x_13);
return x_14;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_chainLeft___elambda__1___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_IO_FS_Stream_chainLeft___elambda__1(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_chainLeft___elambda__3___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_IO_FS_Stream_chainLeft___elambda__3(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_IO_FS_Stream_chainLeft___elambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_IO_FS_Stream_chainLeft___elambda__4(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_IO_FS_Stream_chainLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_IO_FS_Stream_chainLeft(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 5);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_string_append(x_2, x_3);
x_7 = lean_apply_2(x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 5);
lean_inc(x_5);
x_6 = lean_apply_2(x_5, x_2, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_3, x_7);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__4(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_box_usize(x_2);
x_6 = lean_apply_2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_withPrefix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_IO_FS_Stream_withPrefix___elambda__6), 2, 1);
lean_closure_set(x_3, 0, x_1);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_IO_FS_Stream_withPrefix___elambda__5), 2, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_IO_FS_Stream_withPrefix___elambda__4___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_IO_FS_Stream_withPrefix___elambda__3), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_IO_FS_Stream_withPrefix___elambda__2), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_closure((void*)(l_IO_FS_Stream_withPrefix___elambda__1___boxed), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_4);
lean_ctor_set(x_9, 2, x_5);
lean_ctor_set(x_9, 3, x_6);
lean_ctor_set(x_9, 4, x_7);
lean_ctor_set(x_9, 5, x_8);
return x_9;
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IO_FS_Stream_withPrefix___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_IO_FS_Stream_withPrefix___elambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_IO_FS_Stream_withPrefix___elambda__4(x_1, x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedDocumentMeta___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_instInhabitedParserDescr___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_instInhabitedFileMap___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedDocumentMeta() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_instInhabitedDocumentMeta___closed__1;
return x_1;
}
}
lean_object* l_Lean_Server_replaceLspRange(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Lean_FileMap_lspPosToUtf8Pos(x_1, x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_FileMap_lspPosToUtf8Pos(x_1, x_6);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_string_utf8_extract(x_8, x_9, x_5);
lean_dec(x_5);
x_11 = lean_string_utf8_byte_size(x_8);
x_12 = lean_string_utf8_extract(x_8, x_7, x_11);
lean_dec(x_11);
lean_dec(x_7);
x_13 = lean_string_append(x_10, x_3);
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = l_Lean_FileMap_ofString(x_14);
return x_15;
}
}
lean_object* l_Lean_Server_replaceLspRange___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_replaceLspRange(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Server_maybeTee_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Server_maybeTee_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_maybeTee_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_mk___at_Lean_Server_maybeTee___spec__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_IO_Prim_fopenFlags(x_2, x_3);
x_6 = lean_io_prim_handle_mk(x_1, x_5, x_4);
lean_dec(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Server_maybeTee___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("LEAN_SERVER_LOG_DIR");
return x_1;
}
}
lean_object* l_Lean_Server_maybeTee(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Server_maybeTee___closed__1;
x_6 = lean_io_getenv(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 0, x_3);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_System_mkFilePath(x_16);
x_18 = 1;
x_19 = 1;
x_20 = l_IO_FS_Handle_mk___at_Lean_Server_maybeTee___spec__1(x_17, x_18, x_19, x_12);
lean_dec(x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_stream_of_handle(x_22);
if (x_2 == 0)
{
lean_object* x_24; 
x_24 = l_IO_FS_Stream_chainRight(x_3, x_23, x_19);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; 
x_25 = l_IO_FS_Stream_chainLeft(x_23, x_3, x_19);
lean_ctor_set(x_20, 0, x_25);
return x_20;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_stream_of_handle(x_26);
if (x_2 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_IO_FS_Stream_chainRight(x_3, x_28, x_19);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_IO_FS_Stream_chainLeft(x_28, x_3, x_19);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_20);
if (x_33 == 0)
{
return x_20;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_20, 0);
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_20);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_6);
if (x_37 == 0)
{
return x_6;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_6, 0);
x_39 = lean_ctor_get(x_6, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_6);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_IO_FS_Handle_mk___at_Lean_Server_maybeTee___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_IO_FS_Handle_mk___at_Lean_Server_maybeTee___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_maybeTee___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Server_maybeTee(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_String_mapAux___at_Lean_Server_toFileUri___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_string_utf8_at_end(x_2, x_1);
if (x_3 == 0)
{
uint32_t x_4; uint32_t x_5; uint8_t x_6; 
x_4 = lean_string_utf8_get(x_2, x_1);
x_5 = 92;
x_6 = x_4 == x_5;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_string_utf8_set(x_2, x_1, x_4);
x_8 = lean_string_utf8_next(x_7, x_1);
lean_dec(x_1);
x_1 = x_8;
x_2 = x_7;
goto _start;
}
else
{
uint32_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 47;
x_11 = lean_string_utf8_set(x_2, x_1, x_10);
x_12 = lean_string_utf8_next(x_11, x_1);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_11;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
uint8_t l_Lean_Server_toFileUri___lambda__1(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = 47;
x_3 = x_1 == x_2;
return x_3;
}
}
static lean_object* _init_l_Lean_Server_toFileUri___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_toFileUri___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_toFileUri___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("file:///");
return x_1;
}
}
lean_object* l_Lean_Server_toFileUri(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_System_FilePath_normalizePath(x_1);
x_3 = l_System_Platform_isWindows;
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_Server_toFileUri___closed__1;
x_5 = l_String_dropWhile(x_2, x_4);
lean_dec(x_2);
x_6 = l_Lean_Server_toFileUri___closed__2;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_String_mapAux___at_Lean_Server_toFileUri___spec__1(x_8, x_2);
x_10 = l_Lean_Server_toFileUri___closed__1;
x_11 = l_String_dropWhile(x_9, x_10);
lean_dec(x_9);
x_12 = l_Lean_Server_toFileUri___closed__2;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
return x_13;
}
}
}
lean_object* l_Lean_Server_toFileUri___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_Server_toFileUri___lambda__1(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Server_foldDocumentChanges_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Server_foldDocumentChanges_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_foldDocumentChanges_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Server_foldDocumentChanges_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Server_foldDocumentChanges_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_foldDocumentChanges_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_foldDocumentChanges___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = l_Lean_FileMap_lspPosToUtf8Pos(x_1, x_15);
x_17 = l_Lean_Server_replaceLspRange(x_11, x_13, x_14);
lean_dec(x_14);
lean_dec(x_11);
x_18 = l_Nat_min(x_12, x_16);
lean_dec(x_16);
lean_dec(x_12);
lean_ctor_set(x_5, 1, x_18);
lean_ctor_set(x_5, 0, x_17);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_ctor_get(x_7, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = l_Lean_FileMap_lspPosToUtf8Pos(x_1, x_24);
x_26 = l_Lean_Server_replaceLspRange(x_20, x_22, x_23);
lean_dec(x_23);
lean_dec(x_20);
x_27 = l_Nat_min(x_21, x_25);
lean_dec(x_25);
lean_dec(x_21);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_3 = x_9;
x_5 = x_28;
goto _start;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_5);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_5, 1);
lean_dec(x_31);
x_32 = lean_ctor_get(x_5, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_7, 0);
lean_inc(x_33);
lean_dec(x_7);
x_34 = l_Lean_FileMap_ofString(x_33);
x_35 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_5, 1, x_35);
lean_ctor_set(x_5, 0, x_34);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_5);
x_37 = lean_ctor_get(x_7, 0);
lean_inc(x_37);
lean_dec(x_7);
x_38 = l_Lean_FileMap_ofString(x_37);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_3 = x_9;
x_5 = x_40;
goto _start;
}
}
}
else
{
return x_5;
}
}
}
static lean_object* _init_l_Lean_Server_foldDocumentChanges___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instInhabitedFileMap;
x_2 = l_instInhabitedNat;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_foldDocumentChanges___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Server.Utils");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_foldDocumentChanges___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Server.foldDocumentChanges");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_foldDocumentChanges___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Server.foldDocumentChanges: empty change array");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_foldDocumentChanges___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Server_foldDocumentChanges___closed__2;
x_2 = l_Lean_Server_foldDocumentChanges___closed__3;
x_3 = lean_unsigned_to_nat(110u);
x_4 = lean_unsigned_to_nat(26u);
x_5 = l_Lean_Server_foldDocumentChanges___closed__4;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Server_foldDocumentChanges(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Array_isEmpty___rarg(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_unsigned_to_nat(4294967295u);
lean_inc(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
return x_5;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
return x_5;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Server_foldDocumentChanges___spec__1(x_2, x_1, x_10, x_11, x_5);
lean_dec(x_2);
return x_12;
}
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_13 = l_Lean_Server_foldDocumentChanges___closed__1;
x_14 = l_Lean_Server_foldDocumentChanges___closed__5;
x_15 = lean_panic_fn(x_13, x_14);
return x_15;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_foldDocumentChanges___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Server_foldDocumentChanges___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Server_foldDocumentChanges___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_foldDocumentChanges(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_takeWhile_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_takeWhile_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_takeWhile_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_List_takeWhile___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_List_takeWhile___rarg(x_1, x_6);
lean_ctor_set(x_2, 1, x_10);
return x_2;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_11);
x_13 = lean_apply_1(x_1, x_11);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_1);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = l_List_takeWhile___rarg(x_1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
}
lean_object* l_List_takeWhile(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_takeWhile___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_Position(lean_object*);
lean_object* initialize_Lean_Data_Lsp(lean_object*);
lean_object* initialize_Init_System_FilePath(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Server_Utils(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Position(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_FilePath(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_instInhabitedDocumentMeta___closed__1 = _init_l_Lean_Server_instInhabitedDocumentMeta___closed__1();
lean_mark_persistent(l_Lean_Server_instInhabitedDocumentMeta___closed__1);
l_Lean_Server_instInhabitedDocumentMeta = _init_l_Lean_Server_instInhabitedDocumentMeta();
lean_mark_persistent(l_Lean_Server_instInhabitedDocumentMeta);
l_Lean_Server_maybeTee___closed__1 = _init_l_Lean_Server_maybeTee___closed__1();
lean_mark_persistent(l_Lean_Server_maybeTee___closed__1);
l_Lean_Server_toFileUri___closed__1 = _init_l_Lean_Server_toFileUri___closed__1();
lean_mark_persistent(l_Lean_Server_toFileUri___closed__1);
l_Lean_Server_toFileUri___closed__2 = _init_l_Lean_Server_toFileUri___closed__2();
lean_mark_persistent(l_Lean_Server_toFileUri___closed__2);
l_Lean_Server_foldDocumentChanges___closed__1 = _init_l_Lean_Server_foldDocumentChanges___closed__1();
lean_mark_persistent(l_Lean_Server_foldDocumentChanges___closed__1);
l_Lean_Server_foldDocumentChanges___closed__2 = _init_l_Lean_Server_foldDocumentChanges___closed__2();
lean_mark_persistent(l_Lean_Server_foldDocumentChanges___closed__2);
l_Lean_Server_foldDocumentChanges___closed__3 = _init_l_Lean_Server_foldDocumentChanges___closed__3();
lean_mark_persistent(l_Lean_Server_foldDocumentChanges___closed__3);
l_Lean_Server_foldDocumentChanges___closed__4 = _init_l_Lean_Server_foldDocumentChanges___closed__4();
lean_mark_persistent(l_Lean_Server_foldDocumentChanges___closed__4);
l_Lean_Server_foldDocumentChanges___closed__5 = _init_l_Lean_Server_foldDocumentChanges___closed__5();
lean_mark_persistent(l_Lean_Server_foldDocumentChanges___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
