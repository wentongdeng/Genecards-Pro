//
//  AppDelegate.h
//  Genecards-Pro
//
//  Created by dengwt on 2019/6/9.
//  Copyright © 2019 dengwt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

