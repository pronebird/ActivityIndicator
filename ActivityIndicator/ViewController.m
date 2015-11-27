//
//  ViewController.m
//  ActivityIndicator
//
//  Created by pronebird on 11/27/15.
//  Copyright © 2015 pronebird. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    [self.activityIndicator startAnimating];
}

@end
