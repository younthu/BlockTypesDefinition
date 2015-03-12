//
//  BlockTypes.h
//  Definitions for basic block types, licensed under MIT. 
// 
//  Created by Andrew Yang, 14-03-12.
//  Copyright (c) 2015 Andrew Yang. All rights reserved.
//
#ifndef __BlockTypes
#define __BlockTypes
typedef void (^blockVoidVoid)(void);
typedef void (^blockVoidId)(id value1);
typedef void (^blockVoidIdId)(id value1, id value2);
typedef void (^blockVoidIdIdId)(id value1, id value2, id value3);
typedef id   (^blockIdVoid)(void);
typedef id   (^blockIdId)(id value1);
typedef id   (^blockIdIdId)(id value1, id value2);
typedef id   (^blockIdIdIdId)(id value1, id value2, id value3);
#endif
