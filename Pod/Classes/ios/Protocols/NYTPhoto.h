//
//  NYTPhoto.h
//  NYTNewsReader
//
//  Created by Brian Capps on 2/10/15.
//  Copyright (c) 2015 NYTimes. All rights reserved.
//

@import UIKit;

@protocol NYTPhoto <NSObject>

@property (nonatomic) UIImage *image;
@property (nonatomic) UIImage *placeholderImage;

@property (nonatomic) NSString *captionTitle;
@property (nonatomic) NSString *captionSummary;
@property (nonatomic) NSString *captionCredit;

@property (nonatomic) NSString *identifier;

@end
