/*
 * Copyright 2010-2017 JetBrains s.r.o.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RUNTIME_ASSERT_H
#define RUNTIME_ASSERT_H

#include "Common.h"

RUNTIME_NORETURN void RuntimeAssertFailed(const char* location, const char* message);

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define RuntimeAssert(condition, message) \
  if (!(condition)) {                        \
    RuntimeAssertFailed( __FILE__ ":" TOSTRING(__LINE__), message); \
  }

#endif // RUNTIME_ASSERT_H
