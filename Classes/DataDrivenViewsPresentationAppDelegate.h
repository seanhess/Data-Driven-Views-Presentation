//
//  DataDrivenViewsPresentationAppDelegate.h
//  DataDrivenViewsPresentation
//
//  Created by Sean Hess on 1/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataDrivenViewsPresentationViewController;

@interface DataDrivenViewsPresentationAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DataDrivenViewsPresentationViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DataDrivenViewsPresentationViewController *viewController;

@end

