//
//  ViewController.m
//  My-OCTools
//
//  Created by fantasy on 16/4/21.
//  Copyright © 2016年 fantasy. All rights reserved.
//

#import "ViewController.h"

#import "common.h"

typedef void(^Test)();

@interface ViewController ()

@property (copy, nonatomic) Test test;

@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
   UIApplication * app = [UIApplication sharedApplication];
  self.view.backgroundColor = HEXRGBcolor(0x454545);
  
  
  @weakify(self);
  self.test = ^(){
    
    @strongify(self);
    self.view.backgroundColor = [UIColor redColor];
    
  };
  
}


@end
