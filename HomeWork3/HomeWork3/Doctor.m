//
//  Doctor.m
//  HomeWork3
//
//  Created by Павел Яновский on 10.03.2024.
//

#import "Doctor.h"

@implementation Doctor

- (void) giveMedicine {
    
    NSLog(@"Доктор даёт лекарство");
    
    [self.delegate takeMedicine];
}

@end
