/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_IMAGE_CLASSBREAK_H__
#define __VISUALIZE_IMAGE_CLASSBREAK_H__

    /**
     * @private
     */

namespace gpudb
{

    /**
     * @private
     * A set of input parameters for {@link
     * #visualizeImageClassbreak(const VisualizeImageClassbreakRequest&) const}.
     * <p>
     */
    struct VisualizeImageClassbreakRequest
    {

        /**
         * @private
         * Constructs a VisualizeImageClassbreakRequest object with default
         * parameter values.
         */
        VisualizeImageClassbreakRequest() :
            tableNames(std::vector<std::string>()),
            worldTableNames(std::vector<std::string>()),
            xColumnName(std::string()),
            yColumnName(std::string()),
            trackIds(std::vector<std::vector<std::string> >()),
            cbColumnName1(std::string()),
            cbVals1(std::vector<std::string>()),
            cbColumnName2(std::vector<std::string>()),
            cbVals2(std::vector<std::vector<std::string> >()),
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double()),
            width(int32_t()),
            height(int32_t()),
            projection(std::string()),
            bgColor(int64_t()),
            styleOptions(std::map<std::string, std::vector<std::string> >()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * @private
         * Constructs a VisualizeImageClassbreakRequest object with the
         * specified parameters.
         * 
         * @param[in] tableNames
         * @param[in] worldTableNames
         * @param[in] xColumnName
         * @param[in] yColumnName
         * @param[in] trackIds
         * @param[in] cbColumnName1
         * @param[in] cbVals1
         * @param[in] cbColumnName2
         * @param[in] cbVals2
         * @param[in] minX
         * @param[in] maxX
         * @param[in] minY
         * @param[in] maxY
         * @param[in] width
         * @param[in] height
         * @param[in] projection
         * @param[in] bgColor
         * @param[in] styleOptions
         * @param[in] options
         * 
         */
        VisualizeImageClassbreakRequest(const std::vector<std::string>& tableNames, const std::vector<std::string>& worldTableNames, const std::string& xColumnName, const std::string& yColumnName, const std::vector<std::vector<std::string> >& trackIds, const std::string& cbColumnName1, const std::vector<std::string>& cbVals1, const std::vector<std::string>& cbColumnName2, const std::vector<std::vector<std::string> >& cbVals2, const double minX, const double maxX, const double minY, const double maxY, const int32_t width, const int32_t height, const std::string& projection, const int64_t bgColor, const std::map<std::string, std::vector<std::string> >& styleOptions, const std::map<std::string, std::string>& options):
            tableNames(tableNames),
            worldTableNames(worldTableNames),
            xColumnName(xColumnName),
            yColumnName(yColumnName),
            trackIds(trackIds),
            cbColumnName1(cbColumnName1),
            cbVals1(cbVals1),
            cbColumnName2(cbColumnName2),
            cbVals2(cbVals2),
            minX(minX),
            maxX(maxX),
            minY(minY),
            maxY(maxY),
            width(width),
            height(height),
            projection(projection),
            bgColor(bgColor),
            styleOptions(styleOptions),
            options(options)
        {
        }

    /**
     * @private
     */

        std::vector<std::string> tableNames;
        std::vector<std::string> worldTableNames;
        std::string xColumnName;
        std::string yColumnName;
        std::vector<std::vector<std::string> > trackIds;
        std::string cbColumnName1;
        std::vector<std::string> cbVals1;
        std::vector<std::string> cbColumnName2;
        std::vector<std::vector<std::string> > cbVals2;
        double minX;
        double maxX;
        double minY;
        double maxY;
        int32_t width;
        int32_t height;
        std::string projection;
        int64_t bgColor;
        std::map<std::string, std::vector<std::string> > styleOptions;
        std::map<std::string, std::string> options;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageClassbreakRequest>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageClassbreakRequest& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.worldTableNames);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.trackIds);
            ::avro::encode(e, v.cbColumnName1);
            ::avro::encode(e, v.cbVals1);
            ::avro::encode(e, v.cbColumnName2);
            ::avro::encode(e, v.cbVals2);
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.projection);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.styleOptions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageClassbreakRequest& v)
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
                            ::avro::decode(d, v.worldTableNames);
                            break;

                        case 2:
                            ::avro::decode(d, v.xColumnName);
                            break;

                        case 3:
                            ::avro::decode(d, v.yColumnName);
                            break;

                        case 4:
                            ::avro::decode(d, v.trackIds);
                            break;

                        case 5:
                            ::avro::decode(d, v.cbColumnName1);
                            break;

                        case 6:
                            ::avro::decode(d, v.cbVals1);
                            break;

                        case 7:
                            ::avro::decode(d, v.cbColumnName2);
                            break;

                        case 8:
                            ::avro::decode(d, v.cbVals2);
                            break;

                        case 9:
                            ::avro::decode(d, v.minX);
                            break;

                        case 10:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 11:
                            ::avro::decode(d, v.minY);
                            break;

                        case 12:
                            ::avro::decode(d, v.maxY);
                            break;

                        case 13:
                            ::avro::decode(d, v.width);
                            break;

                        case 14:
                            ::avro::decode(d, v.height);
                            break;

                        case 15:
                            ::avro::decode(d, v.projection);
                            break;

                        case 16:
                            ::avro::decode(d, v.bgColor);
                            break;

                        case 17:
                            ::avro::decode(d, v.styleOptions);
                            break;

                        case 18:
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
                ::avro::decode(d, v.worldTableNames);
                ::avro::decode(d, v.xColumnName);
                ::avro::decode(d, v.yColumnName);
                ::avro::decode(d, v.trackIds);
                ::avro::decode(d, v.cbColumnName1);
                ::avro::decode(d, v.cbVals1);
                ::avro::decode(d, v.cbColumnName2);
                ::avro::decode(d, v.cbVals2);
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.projection);
                ::avro::decode(d, v.bgColor);
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
     * #visualizeImageClassbreak(const VisualizeImageClassbreakRequest&) const}.
     * <p>
     */
    struct VisualizeImageClassbreakResponse
    {

        /**
         * @private
         * Constructs a VisualizeImageClassbreakResponse object with default
         * parameter values.
         */
        VisualizeImageClassbreakResponse() :
            width(double()),
            height(double()),
            bgColor(int64_t()),
            imageData(std::vector<uint8_t>())
        {
        }

    /**
     * @private
     */

        double width;
        double height;
        int64_t bgColor;
        std::vector<uint8_t> imageData;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageClassbreakResponse>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageClassbreakResponse& v)
        {
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.imageData);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageClassbreakResponse& v)
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
