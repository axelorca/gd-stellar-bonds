// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper for details
// generated by generate-wrapper.py 0.3 on 2023-01-23 15:12:16
// flags: generate-wrapper.py --include ./thirdparty/linuxbsd_headers/X11/extensions/XInput2.h --sys-include "thirdparty/linuxbsd_headers/X11/extensions/XInput2.h" --soname libXi.so.6 --init-name xinput2 --output-header ./platform/linuxbsd/x11/dynwrappers/xinput2-so_wrap.h --output-implementation ./platform/linuxbsd/x11/dynwrappers/xinput2-so_wrap.c
//
// NOTE: Generated from Xi 1.7.10.
// This has been handpatched to workaround some issues with the generator that
// will be eventually fixed. In this case, non-existent symbols inherited from
// libX11, liXext and libXfixes, but absent in libXi.so.6, were removed.
#include <stdint.h>

#define XIQueryPointer XIQueryPointer_dylibloader_orig_xinput2
#define XIWarpPointer XIWarpPointer_dylibloader_orig_xinput2
#define XIDefineCursor XIDefineCursor_dylibloader_orig_xinput2
#define XIUndefineCursor XIUndefineCursor_dylibloader_orig_xinput2
#define XIChangeHierarchy XIChangeHierarchy_dylibloader_orig_xinput2
#define XISetClientPointer XISetClientPointer_dylibloader_orig_xinput2
#define XIGetClientPointer XIGetClientPointer_dylibloader_orig_xinput2
#define XISelectEvents XISelectEvents_dylibloader_orig_xinput2
#define XIGetSelectedEvents XIGetSelectedEvents_dylibloader_orig_xinput2
#define XIQueryVersion XIQueryVersion_dylibloader_orig_xinput2
#define XIQueryDevice XIQueryDevice_dylibloader_orig_xinput2
#define XISetFocus XISetFocus_dylibloader_orig_xinput2
#define XIGetFocus XIGetFocus_dylibloader_orig_xinput2
#define XIGrabDevice XIGrabDevice_dylibloader_orig_xinput2
#define XIUngrabDevice XIUngrabDevice_dylibloader_orig_xinput2
#define XIAllowEvents XIAllowEvents_dylibloader_orig_xinput2
#define XIAllowTouchEvents XIAllowTouchEvents_dylibloader_orig_xinput2
#define XIGrabButton XIGrabButton_dylibloader_orig_xinput2
#define XIGrabKeycode XIGrabKeycode_dylibloader_orig_xinput2
#define XIGrabEnter XIGrabEnter_dylibloader_orig_xinput2
#define XIGrabFocusIn XIGrabFocusIn_dylibloader_orig_xinput2
#define XIGrabTouchBegin XIGrabTouchBegin_dylibloader_orig_xinput2
#define XIUngrabButton XIUngrabButton_dylibloader_orig_xinput2
#define XIUngrabKeycode XIUngrabKeycode_dylibloader_orig_xinput2
#define XIUngrabEnter XIUngrabEnter_dylibloader_orig_xinput2
#define XIUngrabFocusIn XIUngrabFocusIn_dylibloader_orig_xinput2
#define XIUngrabTouchBegin XIUngrabTouchBegin_dylibloader_orig_xinput2
#define XIListProperties XIListProperties_dylibloader_orig_xinput2
#define XIChangeProperty XIChangeProperty_dylibloader_orig_xinput2
#define XIDeleteProperty XIDeleteProperty_dylibloader_orig_xinput2
#define XIGetProperty XIGetProperty_dylibloader_orig_xinput2
#define XIBarrierReleasePointers XIBarrierReleasePointers_dylibloader_orig_xinput2
#define XIBarrierReleasePointer XIBarrierReleasePointer_dylibloader_orig_xinput2
#define XIFreeDeviceInfo XIFreeDeviceInfo_dylibloader_orig_xinput2
#include "thirdparty/linuxbsd_headers/X11/extensions/XInput2.h"
#undef XIQueryPointer
#undef XIWarpPointer
#undef XIDefineCursor
#undef XIUndefineCursor
#undef XIChangeHierarchy
#undef XISetClientPointer
#undef XIGetClientPointer
#undef XISelectEvents
#undef XIGetSelectedEvents
#undef XIQueryVersion
#undef XIQueryDevice
#undef XISetFocus
#undef XIGetFocus
#undef XIGrabDevice
#undef XIUngrabDevice
#undef XIAllowEvents
#undef XIAllowTouchEvents
#undef XIGrabButton
#undef XIGrabKeycode
#undef XIGrabEnter
#undef XIGrabFocusIn
#undef XIGrabTouchBegin
#undef XIUngrabButton
#undef XIUngrabKeycode
#undef XIUngrabEnter
#undef XIUngrabFocusIn
#undef XIUngrabTouchBegin
#undef XIListProperties
#undef XIChangeProperty
#undef XIDeleteProperty
#undef XIGetProperty
#undef XIBarrierReleasePointers
#undef XIBarrierReleasePointer
#undef XIFreeDeviceInfo
#include <dlfcn.h>
#include <stdio.h>
int (*XIQueryPointer_dylibloader_wrapper_xinput2)( Display*, int, Window, Window*, Window*, double*, double*, double*, double*, XIButtonState*, XIModifierState*, XIGroupState*);
int (*XIWarpPointer_dylibloader_wrapper_xinput2)( Display*, int, Window, Window, double, double, unsigned int, unsigned int, double, double);
int (*XIDefineCursor_dylibloader_wrapper_xinput2)( Display*, int, Window, Cursor);
int (*XIUndefineCursor_dylibloader_wrapper_xinput2)( Display*, int, Window);
int (*XIChangeHierarchy_dylibloader_wrapper_xinput2)( Display*, XIAnyHierarchyChangeInfo*, int);
int (*XISetClientPointer_dylibloader_wrapper_xinput2)( Display*, Window, int);
int (*XIGetClientPointer_dylibloader_wrapper_xinput2)( Display*, Window, int*);
int (*XISelectEvents_dylibloader_wrapper_xinput2)( Display*, Window, XIEventMask*, int);
XIEventMask* (*XIGetSelectedEvents_dylibloader_wrapper_xinput2)( Display*, Window, int*);
int (*XIQueryVersion_dylibloader_wrapper_xinput2)( Display*, int*, int*);
XIDeviceInfo* (*XIQueryDevice_dylibloader_wrapper_xinput2)( Display*, int, int*);
int (*XISetFocus_dylibloader_wrapper_xinput2)( Display*, int, Window, Time);
int (*XIGetFocus_dylibloader_wrapper_xinput2)( Display*, int, Window*);
int (*XIGrabDevice_dylibloader_wrapper_xinput2)( Display*, int, Window, Time, Cursor, int, int, int, XIEventMask*);
int (*XIUngrabDevice_dylibloader_wrapper_xinput2)( Display*, int, Time);
int (*XIAllowEvents_dylibloader_wrapper_xinput2)( Display*, int, int, Time);
int (*XIAllowTouchEvents_dylibloader_wrapper_xinput2)( Display*, int, unsigned int, Window, int);
int (*XIGrabButton_dylibloader_wrapper_xinput2)( Display*, int, int, Window, Cursor, int, int, int, XIEventMask*, int, XIGrabModifiers*);
int (*XIGrabKeycode_dylibloader_wrapper_xinput2)( Display*, int, int, Window, int, int, int, XIEventMask*, int, XIGrabModifiers*);
int (*XIGrabEnter_dylibloader_wrapper_xinput2)( Display*, int, Window, Cursor, int, int, int, XIEventMask*, int, XIGrabModifiers*);
int (*XIGrabFocusIn_dylibloader_wrapper_xinput2)( Display*, int, Window, int, int, int, XIEventMask*, int, XIGrabModifiers*);
int (*XIGrabTouchBegin_dylibloader_wrapper_xinput2)( Display*, int, Window, int, XIEventMask*, int, XIGrabModifiers*);
int (*XIUngrabButton_dylibloader_wrapper_xinput2)( Display*, int, int, Window, int, XIGrabModifiers*);
int (*XIUngrabKeycode_dylibloader_wrapper_xinput2)( Display*, int, int, Window, int, XIGrabModifiers*);
int (*XIUngrabEnter_dylibloader_wrapper_xinput2)( Display*, int, Window, int, XIGrabModifiers*);
int (*XIUngrabFocusIn_dylibloader_wrapper_xinput2)( Display*, int, Window, int, XIGrabModifiers*);
int (*XIUngrabTouchBegin_dylibloader_wrapper_xinput2)( Display*, int, Window, int, XIGrabModifiers*);
Atom* (*XIListProperties_dylibloader_wrapper_xinput2)( Display*, int, int*);
void (*XIChangeProperty_dylibloader_wrapper_xinput2)( Display*, int, Atom, Atom, int, int, unsigned char*, int);
void (*XIDeleteProperty_dylibloader_wrapper_xinput2)( Display*, int, Atom);
int (*XIGetProperty_dylibloader_wrapper_xinput2)( Display*, int, Atom, long, long, int, Atom, Atom*, int*, unsigned long*, unsigned long*, unsigned char**);
void (*XIBarrierReleasePointers_dylibloader_wrapper_xinput2)( Display*, XIBarrierReleasePointerInfo*, int);
void (*XIBarrierReleasePointer_dylibloader_wrapper_xinput2)( Display*, int, PointerBarrier, BarrierEventID);
void (*XIFreeDeviceInfo_dylibloader_wrapper_xinput2)( XIDeviceInfo*);
int initialize_xinput2(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libXi.so.6", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
// XIQueryPointer
  *(void **) (&XIQueryPointer_dylibloader_wrapper_xinput2) = dlsym(handle, "XIQueryPointer");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIWarpPointer
  *(void **) (&XIWarpPointer_dylibloader_wrapper_xinput2) = dlsym(handle, "XIWarpPointer");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIDefineCursor
  *(void **) (&XIDefineCursor_dylibloader_wrapper_xinput2) = dlsym(handle, "XIDefineCursor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIUndefineCursor
  *(void **) (&XIUndefineCursor_dylibloader_wrapper_xinput2) = dlsym(handle, "XIUndefineCursor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIChangeHierarchy
  *(void **) (&XIChangeHierarchy_dylibloader_wrapper_xinput2) = dlsym(handle, "XIChangeHierarchy");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XISetClientPointer
  *(void **) (&XISetClientPointer_dylibloader_wrapper_xinput2) = dlsym(handle, "XISetClientPointer");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGetClientPointer
  *(void **) (&XIGetClientPointer_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGetClientPointer");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XISelectEvents
  *(void **) (&XISelectEvents_dylibloader_wrapper_xinput2) = dlsym(handle, "XISelectEvents");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGetSelectedEvents
  *(void **) (&XIGetSelectedEvents_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGetSelectedEvents");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIQueryVersion
  *(void **) (&XIQueryVersion_dylibloader_wrapper_xinput2) = dlsym(handle, "XIQueryVersion");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIQueryDevice
  *(void **) (&XIQueryDevice_dylibloader_wrapper_xinput2) = dlsym(handle, "XIQueryDevice");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XISetFocus
  *(void **) (&XISetFocus_dylibloader_wrapper_xinput2) = dlsym(handle, "XISetFocus");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGetFocus
  *(void **) (&XIGetFocus_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGetFocus");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGrabDevice
  *(void **) (&XIGrabDevice_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGrabDevice");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIUngrabDevice
  *(void **) (&XIUngrabDevice_dylibloader_wrapper_xinput2) = dlsym(handle, "XIUngrabDevice");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIAllowEvents
  *(void **) (&XIAllowEvents_dylibloader_wrapper_xinput2) = dlsym(handle, "XIAllowEvents");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIAllowTouchEvents
  *(void **) (&XIAllowTouchEvents_dylibloader_wrapper_xinput2) = dlsym(handle, "XIAllowTouchEvents");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGrabButton
  *(void **) (&XIGrabButton_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGrabButton");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGrabKeycode
  *(void **) (&XIGrabKeycode_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGrabKeycode");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGrabEnter
  *(void **) (&XIGrabEnter_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGrabEnter");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGrabFocusIn
  *(void **) (&XIGrabFocusIn_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGrabFocusIn");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGrabTouchBegin
  *(void **) (&XIGrabTouchBegin_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGrabTouchBegin");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIUngrabButton
  *(void **) (&XIUngrabButton_dylibloader_wrapper_xinput2) = dlsym(handle, "XIUngrabButton");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIUngrabKeycode
  *(void **) (&XIUngrabKeycode_dylibloader_wrapper_xinput2) = dlsym(handle, "XIUngrabKeycode");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIUngrabEnter
  *(void **) (&XIUngrabEnter_dylibloader_wrapper_xinput2) = dlsym(handle, "XIUngrabEnter");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIUngrabFocusIn
  *(void **) (&XIUngrabFocusIn_dylibloader_wrapper_xinput2) = dlsym(handle, "XIUngrabFocusIn");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIUngrabTouchBegin
  *(void **) (&XIUngrabTouchBegin_dylibloader_wrapper_xinput2) = dlsym(handle, "XIUngrabTouchBegin");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIListProperties
  *(void **) (&XIListProperties_dylibloader_wrapper_xinput2) = dlsym(handle, "XIListProperties");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIChangeProperty
  *(void **) (&XIChangeProperty_dylibloader_wrapper_xinput2) = dlsym(handle, "XIChangeProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIDeleteProperty
  *(void **) (&XIDeleteProperty_dylibloader_wrapper_xinput2) = dlsym(handle, "XIDeleteProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIGetProperty
  *(void **) (&XIGetProperty_dylibloader_wrapper_xinput2) = dlsym(handle, "XIGetProperty");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIBarrierReleasePointers
  *(void **) (&XIBarrierReleasePointers_dylibloader_wrapper_xinput2) = dlsym(handle, "XIBarrierReleasePointers");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIBarrierReleasePointer
  *(void **) (&XIBarrierReleasePointer_dylibloader_wrapper_xinput2) = dlsym(handle, "XIBarrierReleasePointer");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XIFreeDeviceInfo
  *(void **) (&XIFreeDeviceInfo_dylibloader_wrapper_xinput2) = dlsym(handle, "XIFreeDeviceInfo");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
return 0;
}
