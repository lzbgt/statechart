/*
 * Copyright 2018 The StateChart Authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef STATE_CHART_JSON_UTILS_H_
#define STATE_CHART_JSON_UTILS_H_

#include <string>

#include "statechart/platform/types.h"
#include "statechart/platform/protobuf.h"

namespace state_chart {
namespace json_utils {

// Prints message.DebugString() with a custom printer that pretty prints
// JSON datamodel inside StateMachineContext.
string DebugString(const proto2::Message& message);

}  // namespace json_utils
}  // namespace state_chart

#endif  // STATE_CHART_JSON_UTILS_H_
