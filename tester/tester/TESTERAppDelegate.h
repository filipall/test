//
//  TESTERAppDelegate.h
//  tester
//
//  Created by Filip Allard on 2014-07-24.
//  Copyright (c) 2014 Filip Allard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TESTERAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
