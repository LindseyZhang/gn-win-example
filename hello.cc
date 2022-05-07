// Copyright 2022. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <iostream>
#include "hello_static.h"
#include "hello_shared.h"

int main(int argc, char* argv[]) {
  std::cout << "Hello World" << std::endl;
  std::cout << GetStaticString() << std::endl;
  std::cout << GetSharedText() << std::endl;
  system("pause");
  return 0;
}