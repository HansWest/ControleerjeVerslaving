//
//  _DetailViewController.h
//  ControleerjeVerslaving
//
//  Created by Hans on 30-10-13.
//  Copyright (c) 2013 Hans. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface _DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
