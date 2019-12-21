/*
 * Copyright (c) Facebook, Inc. and its affiliates.
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
 */

#pragma once

#include <folly/Portability.h>
#include <folly/Preprocessor.h>

#define FOLLY_SAFE_CHECK_IMPL(...)
#define FOLLY_SAFE_CHECK(...)
#define FOLLY_SAFE_DCHECK(...)

namespace folly {
namespace detail {

[[noreturn]] void assertionFailure(
    const char* expr,
    const char* msg,
    const char* file,
    unsigned int line,
    const char* function);
} // namespace detail
} // namespace folly
