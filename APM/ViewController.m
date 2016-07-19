//
//  ViewController.m
//  APM
//
//  Created by ice on 16/7/19.
//  Copyright © 2016年 ice. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIButton *button = [[UIButton alloc] initWithFrame:CGRectMake(100, 100, 200, 50)];
    button.backgroundColor = [UIColor redColor];
    [button setTitle:@"点我就死给你看" forState:UIControlStateNormal];
    [button addTarget:self action:@selector(buttonAction)  forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:button];
}

- (void)buttonAction {
    NSLog(@"呃呃,挂鸟");
   @[@0, @1][2];
}

@end
