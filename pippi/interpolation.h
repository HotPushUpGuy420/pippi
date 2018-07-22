/* Generated by Cython 0.27.3 */

#ifndef __PYX_HAVE__pippi__interpolation
#define __PYX_HAVE__pippi__interpolation


#ifndef __PYX_HAVE_API__pippi__interpolation

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C __Pyx_memviewslice __pyx_f_5pippi_13interpolation__linear(__Pyx_memviewslice, int);
__PYX_EXTERN_C __Pyx_memviewslice __pyx_f_5pippi_13interpolation__linear_inner(__Pyx_memviewslice, __Pyx_memviewslice, int);
__PYX_EXTERN_C __Pyx_memviewslice __pyx_f_5pippi_13interpolation__hermite(__Pyx_memviewslice, int);

#endif /* !__PYX_HAVE_API__pippi__interpolation */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initinterpolation(void);
#else
PyMODINIT_FUNC PyInit_interpolation(void);
#endif

#endif /* !__PYX_HAVE__pippi__interpolation */
