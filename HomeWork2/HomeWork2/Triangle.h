//
//  Triangle.h
//  HomeWork2
//
//  Created by Павел Яновский on 10.03.2024.
//

#import <Foundation/Foundation.h>
#import "Figure.h"

NS_ASSUME_NONNULL_BEGIN

@interface Triangle : Figure

@property (nonatomic) double a;
@property (nonatomic) double b;
@property (nonatomic) double c;

- (instancetype) initWithName:(NSString*)name a:(double)a b:(double)b c:(double)c;

@end

NS_ASSUME_NONNULL_END
