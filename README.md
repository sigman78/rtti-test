RTTI across shared library boundaries test
==========================================

Problem
-------
In case purely inline or template class without [key function](http://itanium-cxx-abi.github.io/cxx-abi/abi.html#vague-vtable) is included two different modules,
rtti functionality breaks: dynamic_cast wont work.

Links
-----
https://stackoverflow.com/questions/47322895/dynamic-cast-doesnt-work-across-module-boundaries-on-clang
https://github.com/android/ndk/issues/533#issuecomment-335977747
https://code.woboq.org/qt5/qtbase/src/corelib/plugin/qlibrary_unix.cpp.html
