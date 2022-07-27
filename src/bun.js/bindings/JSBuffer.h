/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#pragma once

#include "root.h"

#include "JSDOMWrapper.h"
#include "wtf/NeverDestroyed.h"

#include "BufferEncodingType.h"
#include "Buffer.h"

extern "C" bool JSBuffer__isBuffer(JSC::JSGlobalObject*, JSC::EncodedJSValue);

namespace WebCore {

class WEBCORE_EXPORT JSBuffer final : public JSDOMWrapper<Buffer> {
public:
    using Base = JSDOMWrapper<Buffer>;

    static JSBuffer* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<Buffer>&& impl)
    {
        JSBuffer* ptr = new (NotNull, JSC::allocateCell<JSBuffer>(globalObject->vm())) JSBuffer(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSDOMGlobalObject&);
    static JSC::JSObject* prototype(JSC::VM&, JSDOMGlobalObject&);
    static Buffer* toWrapped(JSC::VM&, JSC::JSValue);
    static void destroy(JSC::JSCell*);

    using Adaptor = JSC::JSUint8Array::Adaptor;

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::JSType(JSC::JSType::Uint8ArrayType), StructureFlags), info(), JSC::MayHaveIndexedAccessors);
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);
    template<typename, JSC::SubspaceAccess mode> static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        if constexpr (mode == JSC::SubspaceAccess::Concurrently)
            return nullptr;
        return subspaceForImpl(vm);
    }
    static JSC::GCClient::IsoSubspace* subspaceForImpl(JSC::VM& vm);
    // DECLARE_VISIT_CHILDREN;
    // template<typename Visitor> void visitAdditionalChildren(Visitor&);
    // template<typename Visitor> static void visitOutputConstraints(JSCell*, Visitor&);
    // static void analyzeHeap(JSCell*, JSC::HeapAnalyzer&);

protected:
    JSBuffer(JSC::Structure*, JSDOMGlobalObject&, Ref<Buffer>&&);

    void finishCreation(JSC::VM&);
};

class JSBufferOwner final : public JSC::WeakHandleOwner {
public:
    ~JSBufferOwner() final;
    bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::AbstractSlotVisitor&, const char**) final;
    void finalize(JSC::Handle<JSC::Unknown>, void* context) final;
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, Buffer*)
{
    static NeverDestroyed<JSBufferOwner> owner;
    return &owner.get();
}

inline void* wrapperKey(Buffer* wrappableObject)
{
    return wrappableObject;
}

WEBCORE_EXPORT JSC::JSValue toJS(JSC::JSGlobalObject*, JSDOMGlobalObject*, Buffer&);
inline JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, Buffer* impl) { return impl ? toJS(lexicalGlobalObject, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject*, Ref<Buffer>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, RefPtr<Buffer>&& impl) { return impl ? toJSNewlyCreated(lexicalGlobalObject, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<Buffer> {
    using WrapperClass = JSBuffer;
    using ToWrappedReturnType = Buffer*;
};

} // namespace WebCore
