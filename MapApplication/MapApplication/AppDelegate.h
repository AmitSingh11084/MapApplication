//
//  AppDelegate.h
//  MapApplication
//
//  Created by Amit Singh on 03/12/12.
//  Copyright (c) 2012 Amit Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property(strong,nonatomic) UINavigationController *nav;

@property (strong, nonatomic) MainViewController *viewController;

@end
