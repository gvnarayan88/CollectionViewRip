//
//  CustomCell.h
//  CollectionView
//
//  Created by VEERA NARAYANA GUTTI on 09/07/15.
//  Copyright (c) 2015 VEERA NARAYANA GUTTI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *myImage;
@property (weak, nonatomic) IBOutlet UILabel *myDescriptionLabel;

@end
