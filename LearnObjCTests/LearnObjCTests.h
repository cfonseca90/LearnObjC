//
//  LearnObjCTests.h
//  LearnObjCTests
//
//  Created by Jeffrey Ruberg on 3/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>

@interface LearnObjCTests : SenTestCase {
    NSArray *intArray;
    NSArray *fltArray;
    NSArray *strArray;
    NSMutableArray *intMutArray;
    NSMutableArray *fltMutArray;
}

@property (retain) NSArray *intArray;
@property (retain) NSArray *fltArray;
@property (retain) NSArray *strArray;
@property (retain) NSMutableArray *intMutArray;
@property (retain) NSMutableArray *fltMutArray;

@end
