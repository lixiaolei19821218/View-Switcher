//
//  BIDSwitchViewController.h
//  View Switcher
//
//  Created by 李潇磊 on 13-4-6.
//  Copyright (c) 2013年 李潇磊. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BIDBlueViewController;
@class BIDYellowViewController;

@interface BIDSwitchViewController : UIViewController

@property (strong, nonatomic) BIDYellowViewController *yellowViewController;
@property (strong, nonatomic) BIDBlueViewController *blueViewController;

- (IBAction)switchViews:(id)sender;

@end
