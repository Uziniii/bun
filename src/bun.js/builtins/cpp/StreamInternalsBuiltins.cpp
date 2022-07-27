/*
 * Copyright (c) 2015 Igalia
 * Copyright (c) 2015 Igalia S.L.
 * Copyright (c) 2015 Igalia.
 * Copyright (c) 2015, 2016 Canon Inc. All rights reserved.
 * Copyright (c) 2015, 2016, 2017 Canon Inc.
 * Copyright (c) 2016, 2020 Apple Inc. All rights reserved.
 * Copyright (c) 2022 Codeblog Corp. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

// DO NOT EDIT THIS FILE. It is automatically generated from JavaScript files for
// builtins by the script: Source/JavaScriptCore/Scripts/generate-js-builtins.py

#include "config.h"
#include "StreamInternalsBuiltins.h"

#include "WebCoreJSClientData.h"
#include <JavaScriptCore/HeapInlines.h>
#include <JavaScriptCore/IdentifierInlines.h>
#include <JavaScriptCore/Intrinsic.h>
#include <JavaScriptCore/JSCJSValueInlines.h>
#include <JavaScriptCore/JSCellInlines.h>
#include <JavaScriptCore/StructureInlines.h>
#include <JavaScriptCore/VM.h>

namespace WebCore {

const JSC::ConstructAbility s_streamInternalsMarkPromiseAsHandledCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsMarkPromiseAsHandledCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsMarkPromiseAsHandledCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsMarkPromiseAsHandledCodeLength = 217;
static const JSC::Intrinsic s_streamInternalsMarkPromiseAsHandledCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsMarkPromiseAsHandledCode =
    "(function (promise)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    @assert(@isPromise(promise));\n" \
    "    @putPromiseInternalField(promise, @promiseFieldFlags, @getPromiseInternalField(promise, @promiseFieldFlags) | @promiseFlagsIsHandled);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsShieldingPromiseResolveCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsShieldingPromiseResolveCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsShieldingPromiseResolveCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsShieldingPromiseResolveCodeLength = 198;
static const JSC::Intrinsic s_streamInternalsShieldingPromiseResolveCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsShieldingPromiseResolveCode =
    "(function (result)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    const promise = @Promise.@resolve(result);\n" \
    "    if (promise.@then === @undefined)\n" \
    "        promise.@then = @Promise.prototype.@then;\n" \
    "    return promise;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsPromiseInvokeOrNoopMethodNoCatchCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsPromiseInvokeOrNoopMethodNoCatchCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsPromiseInvokeOrNoopMethodNoCatchCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsPromiseInvokeOrNoopMethodNoCatchCodeLength = 190;
static const JSC::Intrinsic s_streamInternalsPromiseInvokeOrNoopMethodNoCatchCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsPromiseInvokeOrNoopMethodNoCatchCode =
    "(function (object, method, args)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (method === @undefined)\n" \
    "        return @Promise.@resolve();\n" \
    "    return @shieldingPromiseResolve(method.@apply(object, args));\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsPromiseInvokeOrNoopNoCatchCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsPromiseInvokeOrNoopNoCatchCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsPromiseInvokeOrNoopNoCatchCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsPromiseInvokeOrNoopNoCatchCodeLength = 127;
static const JSC::Intrinsic s_streamInternalsPromiseInvokeOrNoopNoCatchCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsPromiseInvokeOrNoopNoCatchCode =
    "(function (object, key, args)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    return @promiseInvokeOrNoopMethodNoCatch(object, object[key], args);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsPromiseInvokeOrNoopMethodCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsPromiseInvokeOrNoopMethodCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsPromiseInvokeOrNoopMethodCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsPromiseInvokeOrNoopMethodCodeLength = 210;
static const JSC::Intrinsic s_streamInternalsPromiseInvokeOrNoopMethodCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsPromiseInvokeOrNoopMethodCode =
    "(function (object, method, args)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    try {\n" \
    "        return @promiseInvokeOrNoopMethodNoCatch(object, method, args);\n" \
    "    }\n" \
    "    catch(error) {\n" \
    "        return @Promise.@reject(error);\n" \
    "    }\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsPromiseInvokeOrNoopCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsPromiseInvokeOrNoopCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsPromiseInvokeOrNoopCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsPromiseInvokeOrNoopCodeLength = 198;
static const JSC::Intrinsic s_streamInternalsPromiseInvokeOrNoopCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsPromiseInvokeOrNoopCode =
    "(function (object, key, args)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    try {\n" \
    "        return @promiseInvokeOrNoopNoCatch(object, key, args);\n" \
    "    }\n" \
    "    catch(error) {\n" \
    "        return @Promise.@reject(error);\n" \
    "    }\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsPromiseInvokeOrFallbackOrNoopCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsPromiseInvokeOrFallbackOrNoopCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsPromiseInvokeOrFallbackOrNoopCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsPromiseInvokeOrFallbackOrNoopCodeLength = 362;
static const JSC::Intrinsic s_streamInternalsPromiseInvokeOrFallbackOrNoopCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsPromiseInvokeOrFallbackOrNoopCode =
    "(function (object, key1, args1, key2, args2)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    try {\n" \
    "        const method = object[key1];\n" \
    "        if (method === @undefined)\n" \
    "            return @promiseInvokeOrNoopNoCatch(object, key2, args2);\n" \
    "        return @shieldingPromiseResolve(method.@apply(object, args1));\n" \
    "    }\n" \
    "    catch(error) {\n" \
    "        return @Promise.@reject(error);\n" \
    "    }\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsValidateAndNormalizeQueuingStrategyCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsValidateAndNormalizeQueuingStrategyCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsValidateAndNormalizeQueuingStrategyCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsValidateAndNormalizeQueuingStrategyCodeLength = 430;
static const JSC::Intrinsic s_streamInternalsValidateAndNormalizeQueuingStrategyCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsValidateAndNormalizeQueuingStrategyCode =
    "(function (size, highWaterMark)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (size !== @undefined && typeof size !== \"function\")\n" \
    "        @throwTypeError(\"size parameter must be a function\");\n" \
    "\n" \
    "    const newHighWaterMark = @toNumber(highWaterMark);\n" \
    "\n" \
    "    if (@isNaN(newHighWaterMark) || newHighWaterMark < 0)\n" \
    "        @throwRangeError(\"highWaterMark value is negative or not a number\");\n" \
    "\n" \
    "    return { size: size, highWaterMark: newHighWaterMark };\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsCreateFIFOCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsCreateFIFOCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsCreateFIFOCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsCreateFIFOCodeLength = 2764;
static const JSC::Intrinsic s_streamInternalsCreateFIFOCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsCreateFIFOCode =
    "(function () {\n" \
    "    \"use strict\";\n" \
    "    class Denqueue {\n" \
    "        constructor() {\n" \
    "          this._head = 0;\n" \
    "          this._tail = 0;\n" \
    "          //\n" \
    "          this._capacityMask = 0x3;\n" \
    "          this._list = @newArrayWithSize(4);\n" \
    "        }\n" \
    "  \n" \
    "        size() {\n" \
    "          if (this._head === this._tail) return 0;\n" \
    "          if (this._head < this._tail) return this._tail - this._head;\n" \
    "          else return this._capacityMask + 1 - (this._head - this._tail);\n" \
    "        }\n" \
    "\n" \
    "        isEmpty() {\n" \
    "            return this.size() == 0;\n" \
    "        }\n" \
    "\n" \
    "        isNotEmpty() {\n" \
    "            return this.size() > 0;\n" \
    "        }\n" \
    "  \n" \
    "        shift() {\n" \
    "            var head = this._head;\n" \
    "            if (head === this._tail) return @undefined;\n" \
    "            var item = this._list[head];\n" \
    "            @putByValDirect(this._list, head, @undefined);\n" \
    "            this._head = (head + 1) & this._capacityMask;\n" \
    "            if (head < 2 && this._tail > 10000 && this._tail <= this._list.length >>> 2) this._shrinkArray();\n" \
    "            return item;\n" \
    "        }\n" \
    "\n" \
    "        peek() {\n" \
    "            if (this._head === this._tail) return @undefined;\n" \
    "            return this._list[this._head];\n" \
    "        }\n" \
    "  \n" \
    "        push(item) {\n" \
    "          var tail = this._tail;\n" \
    "          @putByValDirect(this._list, tail, item);\n" \
    "          this._tail = (tail + 1) & this._capacityMask;\n" \
    "          if (this._tail === this._head) {\n" \
    "            this._growArray();\n" \
    "          }\n" \
    "          //\n" \
    "            //\n" \
    "          //\n" \
    "        }\n" \
    "  \n" \
    "        toArray(fullCopy) {\n" \
    "          var list = this._list;\n" \
    "          var len = @toLength(list.length);\n" \
    "  \n" \
    "          if (fullCopy || this._head > this._tail) {\n" \
    "            var _head = @toLength(this._head);\n" \
    "            var _tail = @toLength(this._tail);\n" \
    "            var total = @toLength((len - _head) + _tail);\n" \
    "            var array = @newArrayWithSize(total);\n" \
    "            var j = 0;\n" \
    "            for (var i = _head; i < len; i++) @putByValDirect(array, j++, list[i]);\n" \
    "            for (var i = 0; i < _tail; i++) @putByValDirect(array, j++, list[i]);\n" \
    "            return array;\n" \
    "          } else {\n" \
    "            return @Array.prototype.slice.@call(list, this._head, this._tail);\n" \
    "          }\n" \
    "        }\n" \
    "        \n" \
    "        clear() {\n" \
    "            this._head = 0;\n" \
    "            this._tail = 0;\n" \
    "            this._list.fill(undefined);\n" \
    "        }\n" \
    "\n" \
    "        _growArray() {\n" \
    "          if (this._head) {\n" \
    "            //\n" \
    "            this._list = this.toArray(true);\n" \
    "            this._head = 0;\n" \
    "          }\n" \
    "  \n" \
    "          //\n" \
    "          this._tail = @toLength(this._list.length);\n" \
    "  \n" \
    "          this._list.length <<= 1;\n" \
    "          this._capacityMask = (this._capacityMask << 1) | 1;\n" \
    "        }\n" \
    "  \n" \
    "        shrinkArray() {\n" \
    "          this._list.length >>>= 1;\n" \
    "          this._capacityMask >>>= 1;\n" \
    "        }\n" \
    "      }\n" \
    "\n" \
    "  \n" \
    "    return new Denqueue();\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsNewQueueCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsNewQueueCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsNewQueueCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsNewQueueCodeLength = 85;
static const JSC::Intrinsic s_streamInternalsNewQueueCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsNewQueueCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    return { content: @createFIFO(), size: 0 };\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsDequeueValueCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsDequeueValueCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsDequeueValueCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsDequeueValueCodeLength = 195;
static const JSC::Intrinsic s_streamInternalsDequeueValueCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsDequeueValueCode =
    "(function (queue)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    const record = queue.content.shift();\n" \
    "    queue.size -= record.size;\n" \
    "    //\n" \
    "    if (queue.size < 0)\n" \
    "        queue.size = 0;\n" \
    "    return record.value;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsEnqueueValueWithSizeCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsEnqueueValueWithSizeCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsEnqueueValueWithSizeCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsEnqueueValueWithSizeCodeLength = 248;
static const JSC::Intrinsic s_streamInternalsEnqueueValueWithSizeCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsEnqueueValueWithSizeCode =
    "(function (queue, value, size)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    size = @toNumber(size);\n" \
    "    if (!@isFinite(size) || size < 0)\n" \
    "        @throwRangeError(\"size has an incorrect value\");\n" \
    "    \n" \
    "    queue.content.push({ value, size });\n" \
    "    queue.size += size;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsPeekQueueValueCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsPeekQueueValueCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsPeekQueueValueCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsPeekQueueValueCodeLength = 115;
static const JSC::Intrinsic s_streamInternalsPeekQueueValueCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsPeekQueueValueCode =
    "(function (queue)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    @assert(queue.content.isNotEmpty());\n" \
    "\n" \
    "    return queue.peek().value;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsResetQueueCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsResetQueueCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsResetQueueCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsResetQueueCodeLength = 152;
static const JSC::Intrinsic s_streamInternalsResetQueueCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsResetQueueCode =
    "(function (queue)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    @assert(\"content\" in queue);\n" \
    "    @assert(\"size\" in queue);\n" \
    "    queue.content.clear();\n" \
    "    queue.size = 0;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsExtractSizeAlgorithmCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsExtractSizeAlgorithmCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsExtractSizeAlgorithmCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsExtractSizeAlgorithmCodeLength = 288;
static const JSC::Intrinsic s_streamInternalsExtractSizeAlgorithmCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsExtractSizeAlgorithmCode =
    "(function (strategy)\n" \
    "{\n" \
    "    if (!(\"size\" in strategy))\n" \
    "        return () => 1;\n" \
    "    const sizeAlgorithm = strategy[\"size\"];\n" \
    "    if (typeof sizeAlgorithm !== \"function\")\n" \
    "        @throwTypeError(\"strategy.size must be a function\");\n" \
    "\n" \
    "    return (chunk) => { return sizeAlgorithm(chunk); };\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsExtractHighWaterMarkCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsExtractHighWaterMarkCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsExtractHighWaterMarkCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsExtractHighWaterMarkCodeLength = 325;
static const JSC::Intrinsic s_streamInternalsExtractHighWaterMarkCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsExtractHighWaterMarkCode =
    "(function (strategy, defaultHWM)\n" \
    "{\n" \
    "    if (!(\"highWaterMark\" in strategy))\n" \
    "        return defaultHWM;\n" \
    "    const highWaterMark = strategy[\"highWaterMark\"];\n" \
    "    if (@isNaN(highWaterMark) || highWaterMark < 0)\n" \
    "        @throwRangeError(\"highWaterMark value is negative or not a number\");\n" \
    "\n" \
    "    return @toNumber(highWaterMark);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsExtractHighWaterMarkFromQueuingStrategyInitCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsExtractHighWaterMarkFromQueuingStrategyInitCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsExtractHighWaterMarkFromQueuingStrategyInitCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsExtractHighWaterMarkFromQueuingStrategyInitCodeLength = 335;
static const JSC::Intrinsic s_streamInternalsExtractHighWaterMarkFromQueuingStrategyInitCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsExtractHighWaterMarkFromQueuingStrategyInitCode =
    "(function (init)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isObject(init))\n" \
    "        @throwTypeError(\"QueuingStrategyInit argument must be an object.\");\n" \
    "    const {highWaterMark} = init;\n" \
    "    if (highWaterMark === @undefined)\n" \
    "        @throwTypeError(\"QueuingStrategyInit.highWaterMark member is required.\");\n" \
    "\n" \
    "    return @toNumber(highWaterMark);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsCreateFulfilledPromiseCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsCreateFulfilledPromiseCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsCreateFulfilledPromiseCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsCreateFulfilledPromiseCodeLength = 115;
static const JSC::Intrinsic s_streamInternalsCreateFulfilledPromiseCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsCreateFulfilledPromiseCode =
    "(function (value)\n" \
    "{\n" \
    "    const promise = @newPromise();\n" \
    "    @fulfillPromise(promise, value);\n" \
    "    return promise;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_streamInternalsToDictionaryCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_streamInternalsToDictionaryCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_streamInternalsToDictionaryCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_streamInternalsToDictionaryCodeLength = 212;
static const JSC::Intrinsic s_streamInternalsToDictionaryCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_streamInternalsToDictionaryCode =
    "(function (value, defaultValue, errorMessage)\n" \
    "{\n" \
    "    if (value === @undefined || value === null)\n" \
    "        return defaultValue;\n" \
    "    if (!@isObject(value))\n" \
    "        @throwTypeError(errorMessage);\n" \
    "    return value;\n" \
    "})\n" \
;


#define DEFINE_BUILTIN_GENERATOR(codeName, functionName, overriddenName, argumentCount) \
JSC::FunctionExecutable* codeName##Generator(JSC::VM& vm) \
{\
    JSVMClientData* clientData = static_cast<JSVMClientData*>(vm.clientData); \
    return clientData->builtinFunctions().streamInternalsBuiltins().codeName##Executable()->link(vm, nullptr, clientData->builtinFunctions().streamInternalsBuiltins().codeName##Source(), std::nullopt, s_##codeName##Intrinsic); \
}
WEBCORE_FOREACH_STREAMINTERNALS_BUILTIN_CODE(DEFINE_BUILTIN_GENERATOR)
#undef DEFINE_BUILTIN_GENERATOR


} // namespace WebCore
