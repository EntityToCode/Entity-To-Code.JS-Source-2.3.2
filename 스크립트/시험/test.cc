#include <node.h>

void Sum(const v8::FunctionCallbackInfo<v8::Value> &args)
{
    v8::Isolate *isolate = args.GetIsolate();

    int i;

    int a = 1223;
    int b = 3223;

    for (i = 0; i < 20; i++)
    {
        a += b;
    }

    auto total = v8::Number::New(isolate, a);
    args.GetReturnValue().Set(total);
}

void Initialize(v8::Local<v8::Object> exports)
{
    NODE_SET_METHOD(exports, "sum", Sum);
}
NODE_MODULE(addon, Initialize)