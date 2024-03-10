//
//  Figure.h
//  HomeWork2
//
//  Created by Павел Яновский on 10.03.2024.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Абстрактный класс
@interface Figure : NSObject

// Название фигуры
@property (nonatomic) NSString *name;
//@property (nonatomic) double area;
//@property (nonatomic) double perimeter;

// Подсчёт площади
- (double) calcArea;

// Подсчёт периметра
- (double) calcPerimeter;

// Вывод информации о фигуре
- (void) figureInfo;

@end

NS_ASSUME_NONNULL_END
