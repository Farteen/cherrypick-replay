//
//  AppDelegate.h
//  CherryPick
//
//  Created by Glasses on 21/11/2017.
//  Copyright © 2017 Glasses. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

