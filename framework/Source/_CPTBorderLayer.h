#import "CPTLayer.h"

@class CPTBorderedLayer;

@interface CPTBorderLayer : CPTLayer

@property (nonatomic, readwrite, strong) CPTBorderedLayer *maskedLayer;

@end
