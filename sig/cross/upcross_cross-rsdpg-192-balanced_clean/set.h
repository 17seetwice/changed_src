
#define RSDPG 1
#define CATEGORY_3 1
#define BALANCED 1

#undef NO_TREES

/* liboqs-edit: when compiling avx2 just assume that Intel Instrinsics are available */
#define IMPLEMENTATION_clean

/* PQClean-edit: avoid VLA */
#define CSPRNG_INPUT_LENGTH (SALT_LENGTH_BYTES+SEED_LENGTH_BYTES)

/* PQClean-edit: skip asserts so that verify() always returns a value */
#define SKIP_ASSERT

/* Undefine unused macros to facilitate dead code removal using unifdef */
#undef SHA_3_LIBKECCAK
/* Variant */
#undef RSDP
/* Category */
#undef CATEGORY_1
#undef CATEGORY_5
/* Target */
#undef SPEED
#undef SIG_SIZE
