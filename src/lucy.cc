#include <nan.h>
#include "lucy_parcel.h"

void Init(v8::Local<v8::Object> exports) {
  lucy_bootstrap_parcel();
}

NODE_MODULE(lucy, Init)