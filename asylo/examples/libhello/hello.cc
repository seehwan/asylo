/*
 *
 * Copyright 2018 Asylo authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include "absl/strings/str_split.h"
#include "asylo/client.h"
#include "asylo/examples/libhello/hello.pb.h"
#include "gflags/gflags.h"
#include "asylo/util/logging.h"
int lib_main(int, char*[]);

int main(int argc, char *argv[]) {
  lib_main(argc, argv);
  return 0;
}
