//
//  NYTPhotosViewControllerDataSource.h
//  NYTNewsReader
//
//  Created by Brian Capps on 2/10/15.
//  Copyright (c) 2015 NYTimes. All rights reserved.
//

@import UIKit;

@protocol NYTPhoto;

@protocol NYTPhotosViewControllerDataSource <NSObject>

@property (nonatomic, readonly) NSUInteger numberOfPhotos;

- (id <NYTPhoto>)photoAtIndex:(NSUInteger)index;

/**
 *  Subscripting support.
 *
 *  @param idx The index of the photo.
 *
 *  @return The photo at the index, or nil if there is none.
 */
- (id <NYTPhoto>)objectAtIndexedSubscript:(NSUInteger)idx;

@end
