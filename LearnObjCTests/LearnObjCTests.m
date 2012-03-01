//
//  LearnObjCTests.m
//  LearnObjCTests
//
//  Created by Jeffrey Ruberg on 3/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "LearnObjCTests.h"

@implementation LearnObjCTests

@synthesize intArray;
@synthesize fltArray;
@synthesize strArray;
@synthesize intMutArray;
@synthesize fltMutArray;

- (void)setUp
{
    [super setUp];
    
    self.intArray = [NSArray arrayWithObjects:
                     [NSNumber numberWithInt:4],
                     [NSNumber numberWithInt:9],
                     [NSNumber numberWithInt:3],
                     [NSNumber numberWithInt:34],
                     [NSNumber numberWithInt:-3], nil];
    
    self.fltArray = [NSArray arrayWithObjects:
                     [NSNumber numberWithInt:4.2],
                     [NSNumber numberWithInt:9.9],
                     [NSNumber numberWithInt:33.2],
                     [NSNumber numberWithInt:9.8],
                     [NSNumber numberWithInt:9.901],
                     [NSNumber numberWithInt:-34.2],
                     [NSNumber numberWithInt:-3.34], nil];
    
    self.strArray = [NSArray arrayWithObjects:@"HI", @"There", @"Your", @"Mom", @"Dudeeees", nil];
    
    self.intMutArray = [self.intArray mutableCopy];
    self.fltMutArray = [self.fltArray mutableCopy];
}

- (void)tearDown
{
    // Tear-down code here.
    
    [super tearDown];
}

- (void)testLinearSearch {
    STFail(@"Linear search tests not implemented yet.");
}

- (void)testBinarySearch {
    STFail(@"Binary search tests not implemented yet.");
}

- (void)testSelectionSort {
    STFail(@"Selection sort tests not implemented yet.");
}

- (void)testMergeSort {
    STFail(@"Merge sort tests not implemented yet.");
}

@end
