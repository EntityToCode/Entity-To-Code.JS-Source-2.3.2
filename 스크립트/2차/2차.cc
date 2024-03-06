#include <node.h>
#include <nan.h>

// DISCRIMINATOR
void 판별자(const v8::FunctionCallbackInfo<v8::Value> &args)
{

  v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

  // AX2 + BX + C
  double A = args[0]->NumberValue(context).FromJust();
  double B = args[1]->NumberValue(context).FromJust();
  double C = args[2]->NumberValue(context).FromJust();

  v8::Local<v8::Number> discriminatorVar = Nan::New((B * B) - (4 * A * C));

  args.GetReturnValue().Set(discriminatorVar);
}

// POSITIVE ROOT
void POS판별자(const v8::FunctionCallbackInfo<v8::Value> &args)
{

  v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

  // AX2 + BX + C
  double A = args[0]->NumberValue(context).FromJust();
  double B = args[1]->NumberValue(context).FromJust();
  // double C = args[2]->NumberValue(context).FromJust();
  double Discriminator = args[2]->NumberValue(context).FromJust(); // C++에서는 제곱근 함수를 수행할 수 없으므로 Python/javascript 엔진으로 소스를 제공합니다.

  // v8::Local<v8::Number> discriminatorVar = Nan::New((B * B) - (4 * A * C));
  // v8::Local<v8::Number> negB = Nan::New(B * -1);
  // v8::Local<v8::Number> twoA = Nan::New(A * 2);
  v8::Local<v8::Number> positiveRoot = Nan::New((((B * -1)) + Discriminator) / (A * 2)); // SHIT

  args.GetReturnValue().Set(positiveRoot);
}

void NEG판별자(const v8::FunctionCallbackInfo<v8::Value> &args)
{

  v8::Local<v8::Context> context = args.GetIsolate()->GetCurrentContext();

  // AX2 + BX + C
  double A = args[0]->NumberValue(context).FromJust();
  double B = args[1]->NumberValue(context).FromJust();
  // double C = args[2]->NumberValue(context).FromJust();
  double Discriminator = args[2]->NumberValue(context).FromJust(); // C++에서는 제곱근 함수를 수행할 수 없으므로 Python/javascript 엔진으로 소스를 제공합니다.

  // v8::Local<v8::Number> discriminatorVar = Nan::New((B * B) - (4 * A * C));
  // v8::Local<v8::Number> negB = Nan::New(B * -1);
  // v8::Local<v8::Number> twoA = Nan::New(A * 2);
  v8::Local<v8::Number> positiveRoot = Nan::New((((B * -1)) - Discriminator) / (A * 2)); // SHIT

  args.GetReturnValue().Set(positiveRoot);
}

void Initialize(v8::Local<v8::Object> exports)
{
  NODE_SET_METHOD(exports, "판별자", 판별자);       // Quad Discriminator
  NODE_SET_METHOD(exports, "POS판별자", POS판별자); // Quad Discriminator POS판별자
  NODE_SET_METHOD(exports, "NEG판별자", NEG판별자); // Quad Discriminator NEG판별자
}
NODE_MODULE(addon, Initialize)
