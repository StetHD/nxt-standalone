// Copyright 2017 The Dawn Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DAWNNATIVE_METAL_DEPTHSTENCILSTATEMTL_H_
#define DAWNNATIVE_METAL_DEPTHSTENCILSTATEMTL_H_

#include "dawn_native/DepthStencilState.h"

#import <Metal/Metal.h>

namespace dawn_native { namespace metal {

    class Device;

    class DepthStencilState : public DepthStencilStateBase {
      public:
        DepthStencilState(DepthStencilStateBuilder* builder);
        ~DepthStencilState();

        id<MTLDepthStencilState> GetMTLDepthStencilState();

      private:
        id<MTLDepthStencilState> mMtlDepthStencilState = nil;
    };

}}  // namespace dawn_native::metal

#endif  // DAWNNATIVE_METAL_DEPTHSTENCILSTATEMTL_H_
