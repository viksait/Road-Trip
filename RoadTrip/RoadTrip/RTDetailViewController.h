//
//  RTDetailViewController.h
//  RoadTrip
//
//  Created by Byteridge on 5/13/14.
//  Copyright (c) 2014 Byteridge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
