# BlockTypesDefinition
Define common used Block types for callback, .h only, no .m file.

# How to use it
You can use it in 2 ways:

* Download BlockTypes.h and add it into your project.
* Copy code from BlockTypes.h and paste it into your code:

```
#ifndef __BlockTypes
#define __BlockTypes
typedef void (^blockVoidVoid)  (void);
typedef void (^blockVoidId)    (id value1);
typedef void (^blockVoidIdId)  (id value1, id value2);
typedef void (^blockVoidIdIdId)(id value1, id value2, id value3);
typedef id   (^blockIdVoid)    (void);
typedef id   (^blockIdId)      (id value1);
typedef id   (^blockIdIdId)    (id value1, id value2);
typedef id   (^blockIdIdIdId)  (id value1, id value2, id value3);
#endif
```
# MIT License
Be glad to share it with you, you can use it for whatever you want.
