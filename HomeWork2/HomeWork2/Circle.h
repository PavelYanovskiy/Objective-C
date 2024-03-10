//
//  Circle.h
//  HomeWork2
//
//  Created by Павел Яновский on 10.03.2024.
//

#import <Foundation/Foundation.h>
#import "Figure.h"

NS_ASSUME_NONNULL_BEGIN

@interface Circle : Figure

@property (nonatomic) double radius;

- (instancetype) initWithName:(NSString*)name radius:(double)radius;

@end

NS_ASSUME_NONNULL_END

