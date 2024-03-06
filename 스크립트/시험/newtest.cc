// const addon = require('./build/Release/이차식');
// var x = addon.sum(2, 3)
// console.log(x)

#include <node.h>
#include <nan.h>
                void
                Sum(const v8::FunctionCallbackInfo<v8::Value> &args)
{
    // v8::Isolate *isolate = args.GetIsolate();

    v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

    int i;

    int a = 1223;
    int b = 3223;

    for (i = 0; i < 20; i++)
    {
        a += b;
    }

    double arg0 = args[0]->NumberValue(context).FromJust();
    double arg1 = args[1]->NumberValue(context).FromJust();
    // auto total = v8::Number::New(Local, a);
    v8::Local<v8::Number> num = Nan::New(arg0 + arg1);
    args.GetReturnValue().Set(num);
}

void Initialize(v8::Local<v8::Object> exports)
{
    NODE_SET_METHOD(exports, "sum", Sum);
}
NODE_MODULE(addon, Initialize)

// #include <nan.h>

// void Add(const Nan::FunctionCallbackInfo<v8::Value> &info)
// {
//     v8::Local<v8::Context> context = info.GetIsolate()->GetCurrentContext();

//     if (info.Length() < 2)
//     {
//         Nan::ThrowTypeError("Wrong number of arguments");
//         return;
//     }

//     if (!info[0]->IsNumber() || !info[1]->IsNumber())
//     {
//         Nan::ThrowTypeError("Wrong arguments");
//         return;
//     }

//     double arg0 = info[0]->NumberValue(context).FromJust();
//     double arg1 = info[1]->NumberValue(context).FromJust();
//     v8::Local<v8::Number> num = Nan::New(arg0 + arg1);

//     info.GetReturnValue().Set(num);
// }

// void Init(v8::Local<v8::Object> exports)
// {
//     v8::Local<v8::Context> context =
//         exports->GetCreationContext().ToLocalChecked();
//     exports->Set(context,
//                  Nan::New("add").ToLocalChecked(),
//                  Nan::New<v8::FunctionTemplate>(Add)
//                      ->GetFunction(context)
//                      .ToLocalChecked());
// }

// NODE_MODULE(addon, Init)