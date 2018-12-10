//
//  TwilioVideoViewController.h
//
//  Copyright © 2016-2017 Twilio, Inc. All rights reserved.
//

@import UIKit;

@interface TwilioVideoViewController : UIViewController

@property (nonatomic, strong) NSString *accessToken;
@property (nonatomic, weak) id <CDVCommandDelegate> commandDelegate;

- (void)connectToRoom:(NSString*)room ;

@end
