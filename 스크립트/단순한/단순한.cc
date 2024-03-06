#include <node.h>
#include <nan.h>
void 추가하다(const v8::FunctionCallbackInfo<v8::Value> &args)
{

  v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

  double arg0 = args[0]->NumberValue(context).FromJust();
  double arg1 = args[1]->NumberValue(context).FromJust();
  v8::Local<v8::Number> num = Nan::New(arg0 + arg1);
  args.GetReturnValue().Set(num);
}

void 보결(const v8::FunctionCallbackInfo<v8::Value> &args)
{

  v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

  double arg0 = args[0]->NumberValue(context).FromJust();
  double arg1 = args[1]->NumberValue(context).FromJust();
  v8::Local<v8::Number> num = Nan::New(arg0 - arg1);
  args.GetReturnValue().Set(num);
}

void 분할(const v8::FunctionCallbackInfo<v8::Value> &args)
{

  v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

  double arg0 = args[0]->NumberValue(context).FromJust();
  double arg1 = args[1]->NumberValue(context).FromJust();
  v8::Local<v8::Number> num = Nan::New(arg0 / arg1);
  args.GetReturnValue().Set(num);
}

void 곱셈(const v8::FunctionCallbackInfo<v8::Value> &args)
{

  v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

  double arg0 = args[0]->NumberValue(context).FromJust();
  double arg1 = args[1]->NumberValue(context).FromJust();
  v8::Local<v8::Number> num = Nan::New(arg0 * arg1);
  args.GetReturnValue().Set(num);
}

void Initialize(v8::Local<v8::Object> exports)
{
  NODE_SET_METHOD(exports, "추가하다", 추가하다); // ADD
  NODE_SET_METHOD(exports, "보결", 보결);         // SUB
  NODE_SET_METHOD(exports, "분할", 분할);         // DIV
  NODE_SET_METHOD(exports, "곱셈", 곱셈);         // MUL
}
NODE_MODULE(addon, Initialize)
