//
//  ViewController.h
//  CameraDemo
//
//  Created by 鲁辰 on 7/5/15.
//  Copyright (c) 2015 ChenLu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)takePhoto:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *takePhotoButton;

@end

