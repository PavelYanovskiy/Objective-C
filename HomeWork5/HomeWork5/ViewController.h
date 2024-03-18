//
//  ViewController.h
//  HomeWork5
//
//  Created by Павел Яновский on 18.03.2024.
//

#import <UIKit/UIKit.h>
#import "Loader.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textView;

@property (nonatomic, strong) Loader* loader;

- (void) performLoadingWithGetRequest;
//- (void) performLoadingWithPostRequest;

@end
