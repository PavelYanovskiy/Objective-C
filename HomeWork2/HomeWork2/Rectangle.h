//
//  Rectangle.h
//  HomeWork2
//
//  Created by Павел Яновский on 10.03.2024.
//

#import "Figure.h"

@interface Rectangle : Figure

@property CGFloat width;
@property CGFloat height;

- (instancetype)initWithName:(NSString *)name width:(CGFloat)width height:(CGFloat)height;

@end


