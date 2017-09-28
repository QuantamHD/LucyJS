#ifndef NODE_LUCY_MACROS_H
#define NODE_LUCY_MACROS_H

#define REQUIRE_ARGUMENTS(n)                                                   \
    if (info.Length() < (n)) {                                                 \
        return Nan::ThrowTypeError("Expected " #n "arguments");                \
    }

#define REQUIRE_ARGUMENT_EXTERNAL(i, var)                                      \
    if (info.Length() <= (i) || !info[i]->IsExternal()) {                      \
        return Nan::ThrowTypeError("Argument " #i " invalid");                 \
    }                                                                          \
    Local<External> var = Local<External>::Cast(info[i]);


#define REQUIRE_ARGUMENT_FUNCTION(i, var)                                      \
    if (info.Length() <= (i) || !info[i]->IsFunction()) {                      \
        return Nan::ThrowTypeError("Argument " #i " must be a function");      \
    }                                                                          \
    Local<Function> var = Local<Function>::Cast(info[i]);


#define REQUIRE_ARGUMENT_STRING(i, var)                                        \
    if (info.Length() <= (i) || !info[i]->IsString()) {                        \
        return Nan::ThrowTypeError("Argument " #i " must be a string");        \
    }                                                                          \
    Nan::Utf8String var(info[i]);


#define OPTIONAL_ARGUMENT_FUNCTION(i, var)                                     \
    Local<Function> var;                                                       \
    if (info.Length() > i && !info[i]->IsUndefined()) {                        \
        if (!info[i]->IsFunction()) {                                          \
            return Nan::ThrowTypeError("Argument " #i " must be a function");  \
        }                                                                      \
        var = Local<Function>::Cast(info[i]);                                  \
    }


#define OPTIONAL_ARGUMENT_INTEGER(i, var, default)                             \
    int var;                                                                   \
    if (info.Length() <= (i)) {                                                \
        var = (default);                                                       \
    }                                                                          \
    else if (info[i]->IsInt32()) {                                             \
        var = Nan::To<int32_t>(info[i]).FromJust();                            \
    }                                                                          \
    else {                                                                     \
        return Nan::ThrowTypeError("Argument " #i " must be an integer");      \
    }


#define DEFINE_CONSTANT_INTEGER(target, constant, name)                        \
    Nan::ForceSet(target,                                                      \
        Nan::New(#name).ToLocalChecked(),                                      \
        Nan::New<Integer>(constant),                                           \
        static_cast<PropertyAttribute>(ReadOnly | DontDelete)                  \
    );

#define DEFINE_CONSTANT_STRING(target, constant, name)                         \
    Nan::ForceSet(target,                                                      \
        Nan::New(#name).ToLocalChecked(),                                      \
        Nan::New(constant).ToLocalChecked(),                                   \
        static_cast<PropertyAttribute>(ReadOnly | DontDelete)                  \
    );


#define NODE_SET_GETTER(target, name, function)                                \
    Nan::SetAccessor((target)->InstanceTemplate(),                             \
        Nan::New(name).ToLocalChecked(), (function));

#define GET_STRING(source, name, property)                                     \
    Nan::Utf8String name(Nan::Get(source,                                      \
        Nan::New(prop).ToLocalChecked()).ToLocalChecked());

#define GET_INTEGER(source, name, prop)                                        \
    int name = Nan::To<int>(Nan::Get(source,                                   \
        Nan::New(property).ToLocalChecked()).ToLocalChecked()).FromJust();


#endif