//
//  ViewController.h
//  NormalPicker
//
//  Created by Pavankumar Arepu on 4/29/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIPickerViewDelegate,UIPickerViewDataSource>

@property (weak, nonatomic) IBOutlet UIPickerView *myPickerView;
@property (weak, nonatomic) IBOutlet UILabel *myLabel;

@property (strong, nonatomic) NSArray *countryNames;

@end

