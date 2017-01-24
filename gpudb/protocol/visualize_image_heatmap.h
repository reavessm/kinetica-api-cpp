/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_IMAGE_HEATMAP_H__
#define __VISUALIZE_IMAGE_HEATMAP_H__

    /**
     * @private
     */

namespace gpudb
{

    /**
     * @private
     * A set of input parameters for {@link
     * #visualizeImageHeatmap(const VisualizeImageHeatmapRequest&) const}.
     * <p>
     */
    struct VisualizeImageHeatmapRequest
    {

        /**
         * @private
         * Constructs a VisualizeImageHeatmapRequest object with default
         * parameter values.
         */
        VisualizeImageHeatmapRequest() :
            tableNames(std::vector<std::string>()),
            xColumnName(std::string()),
            yColumnName(std::string()),
            valueColumnName(std::string()),
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double()),
            width(int32_t()),
            height(int32_t()),
            projection(std::string()),
            styleOptions(std::map<std::string, std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * @private
         * Constructs a VisualizeImageHeatmapRequest object with the specified
         * parameters.
         * 
         * @param[in] tableNames_
         * @param[in] xColumnName_
         * @param[in] yColumnName_
         * @param[in] valueColumnName_
         * @param[in] minX_
         * @param[in] maxX_
         * @param[in] minY_
         * @param[in] maxY_
         * @param[in] width_
         * @param[in] height_
         * @param[in] projection_  Values: 'EPSG:4326', 'PLATE_CARREE',
         *                         '900913', 'EPSG:900913', '102100',
         *                         'EPSG:102100', '3857', 'EPSG:3857',
         *                         'WEB_MERCATOR'.
         * @param[in] styleOptions_
         *                           <ul>
         *                                   <li> colormap: Values: 'jet',
         *                           'hot', 'hsv', 'gray', 'blues', 'greens',
         *                           'greys', 'oranges', 'purples', 'reds',
         *                           'viridis'.
         *                                   <li> blur_radius:
         *                                   <li> bg_color:
         *                                   <li> gradient_start_color:
         *                                   <li> gradient_end_color:
         *                           </ul>
         * @param[in] options_
         * 
         */
        VisualizeImageHeatmapRequest(const std::vector<std::string>& tableNames_, const std::string& xColumnName_, const std::string& yColumnName_, const std::string& valueColumnName_, const double minX_, const double maxX_, const double minY_, const double maxY_, const int32_t width_, const int32_t height_, const std::string& projection_, const std::map<std::string, std::string>& styleOptions_, const std::map<std::string, std::string>& options_):
            tableNames( tableNames_ ),
            xColumnName( xColumnName_ ),
            yColumnName( yColumnName_ ),
            valueColumnName( valueColumnName_ ),
            minX( minX_ ),
            maxX( maxX_ ),
            minY( minY_ ),
            maxY( maxY_ ),
            width( width_ ),
            height( height_ ),
            projection( projection_ ),
            styleOptions( styleOptions_ ),
            options( options_ )
        {
        }

    /**
     * @private
     */

        std::vector<std::string> tableNames;
        std::string xColumnName;
        std::string yColumnName;
        std::string valueColumnName;
        double minX;
        double maxX;
        double minY;
        double maxY;
        int32_t width;
        int32_t height;
        std::string projection;
        std::map<std::string, std::string> styleOptions;
        std::map<std::string, std::string> options;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageHeatmapRequest>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageHeatmapRequest& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.valueColumnName);
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.projection);
            ::avro::encode(e, v.styleOptions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageHeatmapRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableNames);
                            break;

                        case 1:
                            ::avro::decode(d, v.xColumnName);
                            break;

                        case 2:
                            ::avro::decode(d, v.yColumnName);
                            break;

                        case 3:
                            ::avro::decode(d, v.valueColumnName);
                            break;

                        case 4:
                            ::avro::decode(d, v.minX);
                            break;

                        case 5:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 6:
                            ::avro::decode(d, v.minY);
                            break;

                        case 7:
                            ::avro::decode(d, v.maxY);
                            break;

                        case 8:
                            ::avro::decode(d, v.width);
                            break;

                        case 9:
                            ::avro::decode(d, v.height);
                            break;

                        case 10:
                            ::avro::decode(d, v.projection);
                            break;

                        case 11:
                            ::avro::decode(d, v.styleOptions);
                            break;

                        case 12:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableNames);
                ::avro::decode(d, v.xColumnName);
                ::avro::decode(d, v.yColumnName);
                ::avro::decode(d, v.valueColumnName);
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.projection);
                ::avro::decode(d, v.styleOptions);
                ::avro::decode(d, v.options);
            }
        }
    };
}

    /**
     * @private
     */

namespace gpudb
{

    /**
     * @private
     * A set of output parameters for {@link
     * #visualizeImageHeatmap(const VisualizeImageHeatmapRequest&) const}.
     * <p>
     */
    struct VisualizeImageHeatmapResponse
    {

        /**
         * @private
         * Constructs a VisualizeImageHeatmapResponse object with default
         * parameter values.
         */
        VisualizeImageHeatmapResponse() :
            width(int32_t()),
            height(int32_t()),
            bgColor(int64_t()),
            imageData(std::vector<uint8_t>())
        {
        }

    /**
     * @private
     */

        int32_t width;
        int32_t height;
        int64_t bgColor;
        std::vector<uint8_t> imageData;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageHeatmapResponse>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageHeatmapResponse& v)
        {
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.imageData);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageHeatmapResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.width);
                            break;

                        case 1:
                            ::avro::decode(d, v.height);
                            break;

                        case 2:
                            ::avro::decode(d, v.bgColor);
                            break;

                        case 3:
                            ::avro::decode(d, v.imageData);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.bgColor);
                ::avro::decode(d, v.imageData);
            }
        }
    };
}

#endif
