//
//  main.m
//  HomeWork4
//
//  Created by Павел Яновский on 10.03.2024.
//

#import <Foundation/Foundation.h>
#import "Robot.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
              
        Robot *myRobot = [Robot new];

        // Перемещаем робота
        
        [myRobot run:^NSString *{
            return @"up";
        }];

        [myRobot run:^NSString *{
            return @"right";
        }];

        [myRobot run:^NSString *{
            return @"down";
        }];
    }
    return 0;
}
