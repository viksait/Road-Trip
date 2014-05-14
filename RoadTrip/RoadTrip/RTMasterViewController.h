//
//  RTMasterViewController.h
//  RoadTrip
//
//  Created by Byteridge on 5/13/14.
//  Copyright (c) 2014 Byteridge. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RTDetailViewController;

@interface RTMasterViewController : UITableViewController

@property (strong, nonatomic) RTDetailViewController *detailViewController;

@end
