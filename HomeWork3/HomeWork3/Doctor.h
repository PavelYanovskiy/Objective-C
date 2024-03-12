//
//  Doctor.h
//  HomeWork3
//
//  Created by Павел Яновский on 10.03.2024.
//

#import <Foundation/Foundation.h>
#import "DoctorDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface Doctor : NSObject

// id - имеется ввиду любой объект (как на свифте AnyObject)
@property (nonatomic, weak, nullable) id<DoctorDelegate> delegate;

- (void) giveMedicine;

@end

NS_ASSUME_NONNULL_END
