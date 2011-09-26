//
//  CustomPickerView.h
//  AnalyzeThis
//
//  Created by Jabari Bell on 9/26/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CustomPickerView : UIView {
    NSString *title;
    UIImage *image;
}

@property(nonatomic, retain) NSString *title;
@property(nonatomic, retain) UIImage *image;

+ (CGFloat)viewWidth;
+ (CGFloat)viewHeight;

@end